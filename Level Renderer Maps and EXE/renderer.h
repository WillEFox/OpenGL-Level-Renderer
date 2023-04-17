// minimalistic code to draw a single triangle, this is not part of the API.
// Simple Vertex Shader\

#include "Model.h"
#include <vector>
#include <commdlg.h>
using namespace H2B;

const char* vertexShaderSource = R"(
#version 330 // GLSL 3.30
// an ultra simple glsl vertex shader
// TODO: Part 2b
struct OBJ_ATTRIBUTES{
	vec3   Kd; // diffuse reflectivity
	float	    d; // dissolve (transparency) 
	vec3    Ks; // specular reflectivity
	float       Ns; // specular exponent
	vec3    Ka; // ambient reflectivity
	float       sharpness; // local reflection map sharpness
	vec3    Tf; // transmission filter
	float       Ni; // optical density (index of refraction)
	vec3    Ke; // emissive reflectivity
	uint    illum; // illumination model
};

layout(row_major) uniform UBO_DATA
{
	vec4 sunDirection, sunColor, sunAmbient, sunDiffuse, sunSpecular, camPos;
	mat4 viewMatrix, projMatrix;
	mat4 worldMatrix;
	OBJ_ATTRIBUTES material;
};
// TODO: Part 4e
// TODO: Part 1f
layout(location = 0) in vec3 local_pos;
layout(location = 1) in vec3 uvw_pos;
layout(location = 2) in vec3 nrm_pos;
// TODO: Part 4a
out vec3 world_nrm;
out vec4 world_Pos;
void main()
{
	// TODO: Part 1f
	//gl_uvw = vec4(uvw_pos, 1);
	//gl_nrm = vec4(nrm_pos, 1);
	// TODO: Part 1h
	// TODO: Part 2h

	vec4 pos = vec4(local_pos, 1);

	pos = pos * worldMatrix * viewMatrix * projMatrix;
	gl_Position = pos;
	world_Pos = vec4(local_pos, 1.0f) * worldMatrix;
	// TODO: Part 4b
	vec4 copy_world_nrm = vec4(nrm_pos, 0);
	copy_world_nrm = copy_world_nrm * worldMatrix;
	world_nrm = vec3(copy_world_nrm);
}
)";
// Simple Fragment Shader
const char* fragmentShaderSource = R"(
#version 330 // GLSL 3.30
out vec4 Pixel;
// an ultra simple glsl fragment shader
// TODO: Part 3a

struct OBJ_ATTRIBUTES{
	vec3   Kd; // diffuse reflectivity
	float	    d; // dissolve (transparency) 
	vec3    Ks; // specular reflectivity
	float       Ns; // specular exponent
	vec3    Ka; // ambient reflectivity
	float       sharpness; // local reflection map sharpness
	vec3    Tf; // transmission filter
	float       Ni; // optical density (index of refraction)
	vec3    Ke; // emissive reflectivity
	uint    illum; // illumination model
};

layout(row_major) uniform UBO_DATA
{
	vec4 sunDirection, sunColor, sunAmbient, sunDiffuse, sunSpecular, camPos;
	mat4 viewMatrix, projMatrix;
	mat4 worldMatrix;
	OBJ_ATTRIBUTES material;
};

// TODO: Part 4e
// TODO: Part 4b
in vec3 world_nrm;
in vec4 world_Pos;
void main() 
{	
	// TODO: Part 3a
	// TODO: Part 1a
	// TODO: Part 4c

	vec3 newWorldNorm = vec3(normalize(world_nrm));

	vec3 newAmbient = material.Ka * sunAmbient.xyz;

	//Directional
	float lightDiff = max(dot(newWorldNorm, normalize(-sunDirection.xyz)), 0.0);
	vec4 direct = (lightDiff * vec4(material.Kd, 1)) * sunColor;

	//Specular	

	vec3 toCam = normalize(camPos.xyz - world_Pos.xyz);
    vec3 toLight = -normalize(sunDirection.xyz);
    vec3 reflect_vec = normalize(reflect(-toLight, normalize(world_nrm)));
    float specular = pow(max(dot(toCam, reflect_vec), 0.0f), material.Ns + 0.000001f);
	vec3 finalSpecular = (specular * material.Ks) * sunSpecular.xyz;

	//Combined
	vec3 color = (direct.xyz + newAmbient) * material.Kd  + finalSpecular;

	Pixel = vec4(color, 1);
	//Pixel = specular;
	// TODO: Part 4e
	// TODO: Part 4f (half-vector or reflect method)
}
)";

const char* vertexShaderSKY = R"(
#version 330 core
layout (location = 0) in vec3 aPos;

out vec3 TexCoords;

uniform mat4 projection;
uniform mat4 view;

void main()
{
	mat4 view2 = mat4(mat3(view));
    TexCoords = aPos;
	vec4 Pos2 = projection * view2 * vec4(aPos, 1.0);
    gl_Position = Pos2.xyww;
}  
)";

const char* pixelShaderSKY = R"(
#version 330 core
out vec4 FragColor;

in vec3 TexCoords;

uniform samplerCube skybox;

void main()
{    
    FragColor = texture(skybox, TexCoords);
}
)";



const char* collisionBoxVS = R"(
#version 330 core

layout(row_major) uniform UBO_DATA
{
	mat4 viewMatrix, projMatrix, worldMatrix;
};

layout (location = 0) in vec3 local_pos;

void main()
{
	vec4 pos = vec4(local_pos, 1);

	pos = pos * worldMatrix * viewMatrix * projMatrix;
	gl_Position = pos;
}  
)";

const char* collisionBoxPS = R"(
#version 330 core
out vec4 FragColor;

void main()
{    
    FragColor = vec4(1, 0, 0, 1);
}
)";

// Used to print debug infomation from OpenGL, pulled straight from the official OpenGL wiki.
#ifndef NDEBUG
void APIENTRY
MessageCallback(GLenum source, GLenum type, GLuint id,
	GLenum severity, GLsizei length,
	const GLchar* message, const void* userParam) {
	fprintf(stderr, "GL CALLBACK: %s type = 0x%x, severity = 0x%x, message = %s\n",
		(type == GL_DEBUG_TYPE_ERROR ? "** GL ERROR **" : ""), type, severity, message);
}
#endif
// Creation, Rendering & Cleanup
class Renderer
{
	// proxy handles
	GW::SYSTEM::GWindow win;
	GW::GRAPHICS::GOpenGLSurface ogl;
	// TODO: Part 4a
	GW::INPUT::GInput keyInput;
	GW::INPUT::GController controllerInput;
	// TODO: Part 2a
	GW::MATH::GMATRIXF matrix4x4 = GW::MATH::GIdentityMatrixF;
	GW::MATH::GMatrix matrixMath;
	// TODO: Part 3c
	GW::MATH::GMATRIXF worldMatrix2 = GW::MATH::GIdentityMatrixF;
	GW::MATH::GMATRIXF worldMatrix3 = GW::MATH::GIdentityMatrixF;
	GW::MATH::GMATRIXF worldMatrix4 = GW::MATH::GIdentityMatrixF;
	GW::MATH::GMATRIXF worldMatrix5 = GW::MATH::GIdentityMatrixF;
	GW::MATH::GMATRIXF worldMatrix6 = GW::MATH::GIdentityMatrixF;
	// TODO: Part 2e
	GW::MATH::GMATRIXF viewMatrix = GW::MATH::GIdentityMatrixF;
	GW::MATH::GMATRIXF cameraMatrix = GW::MATH::GIdentityMatrixF;
	// TODO: Part 3a
	GW::MATH::GMATRIXF projMatrix = GW::MATH::GIdentityMatrixF;
	// what we need at a minimum to draw a triangle
	GLuint vertexArray = 0;
	GLuint vertexBufferObject = 0;
	GLuint indexBuffer = 0;
	GLuint vertexShader = 0;
	GLuint fragmentShader = 0;
	GLuint shaderExecutable = 0;

	GLuint vertexShaderSky = 0;
	GLuint fragmentShaderSky = 0;
	GLuint shaderExecutableSky = 0;
	GLuint skyboxVAO = 0;
	GLuint skyboxVBO = 0;

	GLuint vertexShaderBox = 0;
	GLuint fragmentShaderBox = 0;
	GLuint shaderExecutableBox = 0;

	//UBO and Matrix Data
	GLuint UBOBuffer = 0;
	GLuint UBOBuffer2 = 0;


	GW::MATH::GMATRIXF worldMatrix = GW::MATH::GIdentityMatrixF;
	GW::MATH::GVECTORF lightDir = { -10.0f, -10.0f, 0.0f, 0.0f };
	GW::MATH::GVECTORF lightColor = { 0.9f, 0.9f, 1.0f, 1.0f };
	GW::MATH::GVECTORF lightAmbient = { 0.8f, 0.8f, 0.8f, 0.0f };
	GW::MATH::GVECTORF lightDiffuse = { .5f, .5f, .5f, 0.0f };
	GW::MATH::GVECTORF lightSpecular = { 1.0f, 1.0f, 1.0f, 0.0f };

	struct UBO_DATA {
		GW::MATH::GVECTORF sunDirection, sunColor, sunAmbient, sunDiffuse, sunSpecular, camPos;
		GW::MATH::GMATRIXF viewMatrix, projMatrix;

		GW::MATH::GMATRIXF worldMatrix;
		H2B::ATTRIBUTES material;
	};
	UBO_DATA ubo;

	struct UBO_DATA2 {
		GW::MATH::GMATRIXF viewMatrix, projMatrix, worldMatrix;
	};
	UBO_DATA2 ubo2;


public:
	// TODO: Part 1c
	struct Vertex {
		float x, y, z, w;
	};

	std::vector<std::string> faces
	{
			"../skybox/right.jpg",
			"../skybox/left.jpg",
			"../skybox/top.jpg",
			"../skybox/bottom.jpg",
			"../skybox/front.jpg",
			"../skybox/back.jpg"
	};
	unsigned int cubemapTexture = loadCubemap(faces);

	float skyboxVertices[108] = {
		// positions          
		-1.0f,  1.0f, -1.0f,
		-1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,
		 1.0f,  1.0f, -1.0f,
		-1.0f,  1.0f, -1.0f,

		-1.0f, -1.0f,  1.0f,
		-1.0f, -1.0f, -1.0f,
		-1.0f,  1.0f, -1.0f,
		-1.0f,  1.0f, -1.0f,
		-1.0f,  1.0f,  1.0f,
		-1.0f, -1.0f,  1.0f,

		 1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,

		-1.0f, -1.0f,  1.0f,
		-1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f, -1.0f,  1.0f,
		-1.0f, -1.0f,  1.0f,

		-1.0f,  1.0f, -1.0f,
		 1.0f,  1.0f, -1.0f,
		 1.0f,  1.0f,  1.0f,
		 1.0f,  1.0f,  1.0f,
		-1.0f,  1.0f,  1.0f,
		-1.0f,  1.0f, -1.0f,

		-1.0f, -1.0f, -1.0f,
		-1.0f, -1.0f,  1.0f,
		 1.0f, -1.0f, -1.0f,
		 1.0f, -1.0f, -1.0f,
		-1.0f, -1.0f,  1.0f,
		 1.0f, -1.0f,  1.0f
	};

	std::chrono::steady_clock::time_point last_update;
	std::chrono::steady_clock::time_point spfLast_update;
	float spf = 0;
	GLint shaderHandleWM = 0;
	GLint shaderHandleVM = 0;
	GLint shaderHandlePM = 0;
	float aspectRatio = 0;
	std::vector<std::vector<GW::MATH::GVECTORF>> boundingBoxes;
	std::vector<Model> headerModelData;
	std::vector<GW::MATH::GMATRIXF> worldMatrices;
	std::string level = "../GameLevel.txt";

	Renderer(GW::SYSTEM::GWindow _win, GW::GRAPHICS::GOpenGLSurface _ogl)
	{
		win = _win;
		ogl = _ogl;

		//fileIO(level);

		GW::MATH::GVECTORF lookVector = { 0.15f, 0.75f, 0.0f };
		GW::MATH::GVECTORF eyeVector = { 0.75f, 1.25f,  1.5f };
		GW::MATH::GVECTORF upVector = { 0.0f, 1.0f,  0.0f };
		matrixMath.LookAtRHF(eyeVector, lookVector, upVector, viewMatrix);
		matrixMath.InverseF(viewMatrix, cameraMatrix);
		//matrixMath.InverseF(viewMatrix, viewMatrix);

		ogl.GetAspectRatio(aspectRatio);
		matrixMath.ProjectionOpenGLRHF(G_DEGREE_TO_RADIAN(65), aspectRatio, .1f, 100, projMatrix);

		ubo.sunDirection = lightDir;
		ubo.sunColor = lightColor;
		ubo.viewMatrix = viewMatrix;
		ubo.projMatrix = projMatrix;
		ubo.worldMatrix = worldMatrix;
		//ubo.material = headerModelData[0].materials[0].attrib;
		ubo.sunAmbient = lightAmbient;
		ubo.sunDiffuse = lightDiffuse;
		ubo.sunSpecular = lightSpecular;
		ubo.camPos = { 0.75f, 0.25f,  1.5f, 1.0f };

		ubo2.viewMatrix = viewMatrix;
		ubo2.projMatrix = projMatrix;
		ubo2.worldMatrix = worldMatrix;


		// TODO: Part 4a
		keyInput.Create(_win);
		controllerInput.Create();
		// TODO: Part 2a
		matrixMath.Create();
		// TODO: Part 3c
		// TODO: Part 2e
		// TODO: Part 3b

		// Link Needed OpenGL API functions
		LoadExtensions();
		// In debug mode we link openGL errors to the console
#ifndef NDEBUG
		glEnable(GL_DEBUG_OUTPUT);
		glDebugMessageCallback(MessageCallback, 0);
#endif
		

		//Vertex buffer for level
		GLuint index = headerModelData.size() - 1;

		//glGenVertexArrays(1, &vertexArray);
		//glGenBuffers(1, &vertexBufferObject);
		//glBindVertexArray(vertexArray);
		//glBindBuffer(GL_ARRAY_BUFFER, vertexBufferObject);
		//glBufferData(GL_ARRAY_BUFFER, sizeof(H2B::VERTEX) * headerModelData[index].vertices.size(), headerModelData[index].vertices.data(), GL_STATIC_DRAW);
		////Index buffer for world
		//glGenBuffers(1, &indexBuffer);
		//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
		//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * headerModelData[index].indices.size(), headerModelData[index].indices.data(), GL_STATIC_DRAW);
		////Ubo for world
		//glGenBuffers(1, &UBOBuffer);
		//glBindBuffer(GL_UNIFORM_BUFFER, UBOBuffer);
		//glBufferData(GL_UNIFORM_BUFFER, sizeof(ubo), &ubo, GL_DYNAMIC_DRAW);
		//glBindBuffer(GL_UNIFORM_BUFFER, 0);
		
		//Ubo for world
		glGenBuffers(1, &UBOBuffer);
		glBindBuffer(GL_UNIFORM_BUFFER, UBOBuffer);
		glBufferData(GL_UNIFORM_BUFFER, sizeof(ubo), &ubo, GL_DYNAMIC_DRAW);
		glBindBuffer(GL_UNIFORM_BUFFER, 0);

		glGenBuffers(1, &UBOBuffer2);
		glBindBuffer(GL_UNIFORM_BUFFER, UBOBuffer2);
		glBufferData(GL_UNIFORM_BUFFER, sizeof(ubo2), &ubo2, GL_DYNAMIC_DRAW);
		glBindBuffer(GL_UNIFORM_BUFFER, 0);

		// Create Vertex Shader
		vertexShader = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
		glCompileShader(vertexShader);
		char errors[1024]; GLint result;
		glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &result);
		if (result == false)
		{
			glGetShaderInfoLog(vertexShader, 1024, NULL, errors);
			std::cout << errors << std::endl;
		}
		// Create Fragment Shader
		fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
		glCompileShader(fragmentShader);
		glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &result);
		if (result == false)
		{
			glGetShaderInfoLog(fragmentShader, 1024, NULL, errors);
			std::cout << errors << std::endl;
		}
		// Create Executable Shader Program
		shaderExecutable = glCreateProgram();
		glAttachShader(shaderExecutable, vertexShader);
		glAttachShader(shaderExecutable, fragmentShader);
		glLinkProgram(shaderExecutable);
		glGetProgramiv(shaderExecutable, GL_LINK_STATUS, &result);
		if (result == false)
		{
			glGetProgramInfoLog(shaderExecutable, 1024, NULL, errors);
			std::cout << errors << std::endl;
		}
		//shaderHandleWM = glGetUniformLocation(shaderExecutable, "worldMatrix");
		//shaderHandleVM = glGetUniformLocation(shaderExecutable, "viewMatrix");
		//shaderHandlePM = glGetUniformLocation(shaderExecutable, "projMatrix");
		// Create Vertex Shader
		vertexShaderSky = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vertexShaderSky, 1, &vertexShaderSKY, NULL);
		glCompileShader(vertexShaderSky);
		char errors2[1024]; GLint result2;
		glGetShaderiv(vertexShaderSky, GL_COMPILE_STATUS, &result2);
		if (result2 == false)
		{
			glGetShaderInfoLog(vertexShaderSky, 1024, NULL, errors2);
			std::cout << errors2 << std::endl;
		}
		// Create Fragment Shader
		fragmentShaderSky = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(fragmentShaderSky, 1, &pixelShaderSKY, NULL);
		glCompileShader(fragmentShaderSky);
		glGetShaderiv(fragmentShaderSky, GL_COMPILE_STATUS, &result2);
		if (result2 == false)
		{
			glGetShaderInfoLog(fragmentShaderSky, 1024, NULL, errors2);
			std::cout << errors2 << std::endl;
		}
		// Create Executable Shader Program
		shaderExecutableSky = glCreateProgram();
		glAttachShader(shaderExecutableSky, vertexShaderSky);
		glAttachShader(shaderExecutableSky, fragmentShaderSky);
		glLinkProgram(shaderExecutableSky);
		glGetProgramiv(shaderExecutableSky, GL_LINK_STATUS, &result2);
		if (result2 == false)
		{
			glGetProgramInfoLog(shaderExecutableSky, 1024, NULL, errors2);
			std::cout << errors2 << std::endl;
		}

		glGenVertexArrays(1, &skyboxVAO);
		glGenBuffers(1, &skyboxVBO);
		glBindVertexArray(skyboxVAO);
		glBindBuffer(GL_ARRAY_BUFFER, skyboxVBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(skyboxVertices), &skyboxVertices, GL_STATIC_DRAW);
		glEnableVertexAttribArray(0);
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
		//
		// 
		// 
		// 
		// 
		//Collision boxes
		// Create Vertex Shader
		vertexShaderBox = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vertexShaderBox, 1, &collisionBoxVS, NULL);
		glCompileShader(vertexShaderBox);
		char errors3[1024]; GLint result3;
		glGetShaderiv(vertexShaderBox, GL_COMPILE_STATUS, &result3);
		if (result3 == false)
		{
			glGetShaderInfoLog(vertexShaderBox, 1024, NULL, errors3);
			std::cout << errors3 << std::endl;
		}
		// Create Fragment Shader
		fragmentShaderBox = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(fragmentShaderBox, 1, &collisionBoxPS, NULL);
		glCompileShader(fragmentShaderBox);
		glGetShaderiv(fragmentShaderBox, GL_COMPILE_STATUS, &result3);
		if (result3 == false)
		{
			glGetShaderInfoLog(fragmentShaderBox, 1024, NULL, errors3);
			std::cout << errors3 << std::endl;
		}
		// Create Executable Shader Program
		shaderExecutableBox = glCreateProgram();
		glAttachShader(shaderExecutableBox, vertexShaderBox);
		glAttachShader(shaderExecutableBox, fragmentShaderBox);
		glLinkProgram(shaderExecutableBox);
		glGetProgramiv(shaderExecutableBox, GL_LINK_STATUS, &result3);
		if (result3 == false)
		{
			glGetProgramInfoLog(shaderExecutableBox, 1024, NULL, errors3);
			std::cout << errors3 << std::endl;
		}

		glGenVertexArrays(1, &skyboxVAO);
		glGenBuffers(1, &skyboxVBO);
		glBindVertexArray(skyboxVAO);
		glBindBuffer(GL_ARRAY_BUFFER, skyboxVBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(skyboxVertices), &skyboxVertices, GL_STATIC_DRAW);
		glEnableVertexAttribArray(0);
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
		

		fileIO(level);
	}
	void Render()
	{
		//GLuint index = headerModelData.size() - 1;

		auto now = std::chrono::steady_clock::now();
		spf = std::chrono::duration_cast<std::chrono::microseconds>(now - spfLast_update).count() / 100000.0f;
		spfLast_update = now;

		for (int index = 0; index < headerModelData.size(); index++) {
			//Create buffers
			//glGenVertexArrays(1, &vertexArray);
			//glGenBuffers(1, &vertexBufferObject);

			/*glBindVertexArray(headerModelData[index].vertexArray);
			glBindBuffer(GL_ARRAY_BUFFER, headerModelData[index].vertexBufferObject);
			glBufferData(GL_ARRAY_BUFFER, sizeof(H2B::VERTEX) * headerModelData[index].vertices.size(), headerModelData[index].vertices.data(), GL_STATIC_DRAW);*/

			//Index buffer for world
			//glGenBuffers(1, &indexBuffer);

			/*glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, headerModelData[index].indexBuffer);
			glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * headerModelData[index].indices.size(), headerModelData[index].indices.data(), GL_STATIC_DRAW);*/

			////Ubo for world
			//glGenBuffers(1, &UBOBuffer);
			//glBindBuffer(GL_UNIFORM_BUFFER, UBOBuffer);
			//glBufferData(GL_UNIFORM_BUFFER, sizeof(ubo), &ubo, GL_DYNAMIC_DRAW);
			//glBindBuffer(GL_UNIFORM_BUFFER, 0);

			glBindBuffer(GL_ARRAY_BUFFER, headerModelData[index].vertexBufferObject);
			glUseProgram(shaderExecutable);

			//glBindVertexArray(vertexArray);
			glBindVertexArray(headerModelData[index].vertexArray);
			glUseProgram(shaderExecutable);

			//glBindVertexArray(vertexArraySky);

			// setup the pipeline


			GLuint blockIndex = glGetUniformBlockIndex(shaderExecutable, "UBO_DATA");


			glBindBufferBase(GL_UNIFORM_BUFFER, 0, UBOBuffer);

			glUniformBlockBinding(shaderExecutable, blockIndex, 0);

			ubo.worldMatrix = worldMatrices[index];

			for (int i = 0; i < headerModelData[index].materialCount; ++i) {

				ubo.material = headerModelData[index].materials[i].attrib;
				ubo.viewMatrix = viewMatrix;
				

				glBindBuffer(GL_UNIFORM_BUFFER, UBOBuffer);

				void* ptr = glMapBuffer(GL_UNIFORM_BUFFER, GL_WRITE_ONLY);
				memcpy(ptr, &ubo, sizeof(ubo));
				glUnmapBuffer(GL_UNIFORM_BUFFER);
				glDrawElements(GL_TRIANGLES, headerModelData[index].batches[i].indexCount, GL_UNSIGNED_INT, (void*)(headerModelData[index].batches[i].indexOffset * sizeof(unsigned int)));
			}
			glBindVertexArray(0);

			glUseProgram(shaderExecutableBox);

			GLuint blockIndex2 = glGetUniformBlockIndex(shaderExecutableBox, "UBO_DATA");
			glBindBufferBase(GL_UNIFORM_BUFFER, 0, UBOBuffer2);
			glUniformBlockBinding(shaderExecutableBox, blockIndex2, 0);
			ubo2.worldMatrix = worldMatrices[index];
			ubo2.viewMatrix = viewMatrix;

			glBindBuffer(GL_UNIFORM_BUFFER, UBOBuffer2);

			void* ptr = glMapBuffer(GL_UNIFORM_BUFFER, GL_WRITE_ONLY);
			memcpy(ptr, &ubo2, sizeof(ubo2));
			glUnmapBuffer(GL_UNIFORM_BUFFER);
			/*GLint viewLocation = glGetUniformLocation(shaderExecutableBox, "viewMatrix");
			glUniformMatrix4fv(viewLocation, 1, GL_FALSE, (GLfloat*)&viewMatrix);

			GLint projectLocation = glGetUniformLocation(shaderExecutableBox, "projMatrix");
			glUniformMatrix4fv(projectLocation, 1, GL_FALSE, (GLfloat*)&projMatrix);

			GLint worldLocation = glGetUniformLocation(shaderExecutableBox, "worldMatrix");
			glUniformMatrix4fv(worldLocation, 1, GL_FALSE, (GLfloat*)&worldMatrices[index]);*/

			glBindVertexArray(headerModelData[index].bBoxVertexArray);
			glDrawArrays(GL_LINES, 0, 24);

			glBindVertexArray(0);
		}

		
		glDepthFunc(GL_LEQUAL);
		glUseProgram(shaderExecutableSky);

		GLint viewLocation = glGetUniformLocation(shaderExecutableSky, "view");
		glUniformMatrix4fv(viewLocation, 1, GL_FALSE, (GLfloat*)&viewMatrix);

		GLint projectLocation = glGetUniformLocation(shaderExecutableSky, "projection");
		glUniformMatrix4fv(projectLocation, 1, GL_FALSE, (GLfloat*)&projMatrix);

		glBindVertexArray(skyboxVAO);
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_CUBE_MAP, cubemapTexture);
		glDrawArrays(GL_TRIANGLES, 0, 36);
		glBindVertexArray(0);
		glDepthFunc(GL_LESS);

	}
	// TODO: Part 4b
	void Update_Camera() {
		auto now = std::chrono::steady_clock::now();
		float delta_time = std::chrono::duration_cast<std::chrono::microseconds>(now - last_update).count() / 100000.0f;
		last_update = now;
		// TODO Part 4c
		float oneState = 0;
		keyInput.GetState(G_KEY_1, oneState);
		if (oneState > 0) {
			worldMatrices.clear();
			headerModelData.clear();
			std::string otherLevel = "../SecondGameLevel.txt";
			fileIO(otherLevel);
		}

		float twoState = 0;
		keyInput.GetState(G_KEY_2, twoState);
		if (twoState > 0) {
			worldMatrices.clear();
			headerModelData.clear();
			std::string otherLevel = "../GameLevel.txt";
			fileIO(otherLevel);
		}

		float f1State = 0;
		keyInput.GetState(G_KEY_F1, f1State);
		if (f1State > 0) {
			worldMatrices.clear();
			headerModelData.clear();
			std::string otherLevel = openFile(".txt");
			fileIO(otherLevel);
		}
		// TODO: Part 4d
		const float cameraSpeed = 0.3f;

		//Total_Y_Change = SPACE_KEY_STATE – LEFT_SHIFT_STATE + RIGHT_TRIGGER_STATE – LEFT_TRIGGER_STATE
		float spaceState = 0;
		keyInput.GetState(G_KEY_SPACE, spaceState);
		float leftShiftState = 0;
		keyInput.GetState(G_KEY_LEFTSHIFT, leftShiftState);
		float rightTriggerState = 0;
		controllerInput.GetState(0, G_RIGHT_TRIGGER_AXIS, rightTriggerState);
		float leftTriggerState = 0;
		controllerInput.GetState(0, G_LEFT_TRIGGER_AXIS, leftTriggerState);

		float yChange = spaceState - leftShiftState + rightTriggerState - leftTriggerState;
		//Camera.Position.Y += Total_Y_Change * Camera_Speed * Seconds_Passed_Since_Last_Frame
		//cameraMatrix.row4.y += yChange * cameraSpeed * delta_time;

		// TODO: Part 4e
		// PerFrameSpeed = Camera_Speed * Seconds_Passed_Since_Last_Frame
		float perFrameSpeed = cameraSpeed * spf;

		//Total_Z_Change = W_KEY_STATE – S_KEY_STATE + LEFT_STICK_Y_AXIS_STATE
		float wState = 0;
		keyInput.GetState(G_KEY_W, wState);
		float sState = 0;
		keyInput.GetState(G_KEY_S, sState);
		float leftStickYState = 0;
		controllerInput.GetState(0, G_LY_AXIS, leftStickYState);

		float zChange = wState - sState + leftStickYState;

		//Total_X_Change = D_KEY_STATE – A_KEY_STATE + LEFT_STICK_X_AXIS_STATE
		float dState = 0;
		keyInput.GetState(G_KEY_D, dState);
		float aState = 0;
		keyInput.GetState(G_KEY_A, aState);
		float leftStickXState = 0;
		controllerInput.GetState(0, G_LX_AXIS, leftStickXState);

		float xChange = dState - aState + leftStickXState;

		//TranslationMatrix(Total_X_Change * PerFrameSpeed, 0, -Total_Z_Change * PerFrameSpeed)
		GW::MATH::GMATRIXF cameraTranslationMatrix = GW::MATH::GIdentityMatrixF;

		bool xCanMove = true;
		bool yCanMove = true;
		bool zCanMove = true;

		///// Testing X bounds
		bool bounce = false;


		/////
		for (int i = 0; i < headerModelData.size(); ++i) {

			GW::MATH::GVECTORF largestVerticeWS = { headerModelData[i].largestVertice.x, headerModelData[i].largestVertice.y, headerModelData[i].largestVertice.z, 1 };
			GW::MATH::GVECTORF smallestVerticeWS = { headerModelData[i].smallestVertice.x, headerModelData[i].smallestVertice.y, headerModelData[i].smallestVertice.z, 1 };
			GW::MATH::GMATRIXF cameraTranslationMatrixTEST = cameraTranslationMatrix;
			GW::MATH::GMATRIXF cameraMatrixTEST = cameraMatrix;

			GW::MATH::GMATRIXF transposedWorldMatrix = transpose(worldMatrices[i]);

			matrixMath.VectorXMatrixF(worldMatrices[i], largestVerticeWS, largestVerticeWS);
			matrixMath.VectorXMatrixF(worldMatrices[i], smallestVerticeWS, smallestVerticeWS);

			cameraTranslationMatrixTEST.row4.x = xChange * perFrameSpeed;
			cameraTranslationMatrixTEST.row4.z = -zChange * perFrameSpeed;
			cameraMatrixTEST.row4.y += yChange * cameraSpeed * delta_time;

			matrixMath.MultiplyMatrixF(cameraTranslationMatrixTEST, cameraMatrixTEST, cameraMatrixTEST);

			/*largestVerticeWS = illDoItMyselfCuzGWIsDumb(viewMatrix, largestVerticeWS);
			smallestVerticeWS = illDoItMyselfCuzGWIsDumb(viewMatrix, smallestVerticeWS);

			largestVerticeWS = illDoItMyselfCuzGWIsDumb(projMatrix, largestVerticeWS);
			smallestVerticeWS = illDoItMyselfCuzGWIsDumb(projMatrix, smallestVerticeWS);*/

			//matrixMath.VectorXMatrixF(viewMatrix, largestVerticeWS, largestVerticeWS);
			//matrixMath.VectorXMatrixF(viewMatrix, smallestVerticeWS, smallestVerticeWS);

			//matrixMath.VectorXMatrixF(projMatrix, largestVerticeWS, largestVerticeWS);
			//matrixMath.VectorXMatrixF(projMatrix, smallestVerticeWS, smallestVerticeWS);

			if (cameraMatrixTEST.row4.x <= largestVerticeWS.x && cameraMatrixTEST.row4.x >= smallestVerticeWS.x) {
				if (cameraMatrixTEST.row4.y <= largestVerticeWS.y && cameraMatrixTEST.row4.y >= smallestVerticeWS.y) {
					if (cameraMatrixTEST.row4.z <= largestVerticeWS.z && cameraMatrixTEST.row4.z >= smallestVerticeWS.z) {
						bounce = true;
					}
				}
			}

			/*if (largestVerticeWS.x > 3 || largestVerticeWS.y > 3 || largestVerticeWS.z > 3 || largestVerticeWS.x < -3 || largestVerticeWS.y < -3 || largestVerticeWS.z < -3) {
				std::cout << " " << std::endl;
			}

			std::cout << " " << std::endl;*/

		}

		if (!bounce) {
			cameraTranslationMatrix.row4.x = xChange * perFrameSpeed;

			cameraTranslationMatrix.row4.z = -zChange * perFrameSpeed;

			cameraMatrix.row4.y += yChange * cameraSpeed * delta_time;
		}

		//Camera = MatrixMultiplication(TranslationMatrix, Camera)
		matrixMath.MultiplyMatrixF(cameraTranslationMatrix, cameraMatrix, cameraMatrix);

		// TODO: Part 4f 
		//Thumb_Speed = PI * Seconds_Passed_Since_Last_Frame
		float thumbSpeed = 3.14159265359 * spf;
		//Total_Pitch = FOV * MOUSE_Y_DELTA / SCREEN_HEIGHT + RIGHT_STICK_Y_AXIS_STATE * -Thumb_Speed
		float rightStickYState = 0;
		controllerInput.GetState(0, G_RY_AXIS, rightStickYState);

		float mouseDeltaX = 0;
		float mouseDeltaY = 0;
		unsigned int height = 0;
		unsigned int width = 0;
		win.GetHeight(height);
		win.GetWidth(width);
		auto result = keyInput.GetMouseDelta(mouseDeltaX, mouseDeltaY);
		if (G_PASS(result) && result != GW::GReturn::REDUNDANT)
		{
			float totalPitch = G_DEGREE_TO_RADIAN(65) * (mouseDeltaY / height) + rightStickYState * -thumbSpeed;
			//PitchMatrix(-Total_Pitch)
			GW::MATH::GMATRIXF cameraRotationMatrix = GW::MATH::GIdentityMatrixF;
			matrixMath.RotationYawPitchRollF(0, -totalPitch, 0, cameraRotationMatrix);
			//Camera = MatrixMultiplication(PitchMatrix, Camera)
			matrixMath.MultiplyMatrixF(cameraRotationMatrix, cameraMatrix, cameraMatrix);
		}

		// TODO: Part 4g
		float rightStickXState = 0;
		controllerInput.GetState(0, G_RX_AXIS, rightStickXState);
		if (G_PASS(result) && result != GW::GReturn::REDUNDANT)
		{
			//Total_Yaw = FOV * AR * MOUSE_X_DELTA / SCREEN_WIDTH + RIGHT_STICK_X_AXIS_STATE * Thumb_Speed
			float totalYaw = G_DEGREE_TO_RADIAN(65) * aspectRatio * mouseDeltaX / width + rightStickXState * thumbSpeed;
			//YawMatrix(-Total_Yaw)
			GW::MATH::GMATRIXF cameraRotationMatrix = GW::MATH::GIdentityMatrixF;
			matrixMath.RotationYawPitchRollF(-totalYaw, 0, 0, cameraRotationMatrix);
			//Camera.SavePosition()
			GW::MATH::GVECTORF saveCamPos = cameraMatrix.row4;
			//Camera = MatrixMultiplication(Camera, YawMatrix)
			matrixMath.MultiplyMatrixF(cameraMatrix, cameraRotationMatrix, cameraMatrix);
			//Camera.RestorePosition()
			cameraMatrix.row4 = saveCamPos;
		}

		// TODO Part 4c
		matrixMath.InverseF(cameraMatrix, viewMatrix);
	}

	GW::MATH::GVECTORF illDoItMyselfCuzGWIsDumb(GW::MATH::GMATRIXF mat1, GW::MATH::GVECTORF vec1) {
		GW::MATH::GVECTORF multVec = { 0, 0, 0, 0 };
		mat1 = transpose(mat1);
		multVec.x = mat1.row1.x* vec1.x + mat1.row1.y * vec1.y + mat1.row1.z * vec1.z + mat1.row1.w * vec1.w;
		multVec.y = mat1.row2.x * vec1.x + mat1.row2.y * vec1.y + mat1.row2.z * vec1.z + mat1.row2.w * vec1.w;
		multVec.z = mat1.row3.x * vec1.x + mat1.row3.y * vec1.y + mat1.row3.z * vec1.z + mat1.row3.w * vec1.w;
		multVec.w = mat1.row4.x * vec1.x + mat1.row4.y * vec1.y + mat1.row4.z * vec1.z + mat1.row4.w * vec1.w;
		return multVec;
	}



	std::string openFile(const char* filter) {
		OPENFILENAMEA ofn;
		CHAR sizeFile[260] = { 0 };
		ZeroMemory(&ofn, sizeof(OPENFILENAME));
		ofn.lStructSize = sizeof(OPENFILENAME);
		ofn.hwndOwner = nullptr;
		ofn.lpstrFile = sizeFile;
		ofn.nMaxFile = sizeof(sizeFile);
		ofn.lpstrFilter = filter;
		ofn.nFilterIndex = 1;
		ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR;
		if (GetOpenFileNameA(&ofn) == TRUE) {
			return ofn.lpstrFile;
		}
		return std::string();
	}



	GW::MATH::GMATRIXF transpose(GW::MATH::GMATRIXF toTrans) {
		GW::MATH::GMATRIXF flip = toTrans;
		flip.row1.y = toTrans.row2.x;                 /// x1   y1   z1   w1
		flip.row2.x = toTrans.row1.y;                 /// x2   y2   z2   w2
													  /// x3   y3   z3   w3
		flip.row1.z = toTrans.row3.x;                 /// x4   y4   z4   w4
		flip.row3.x = toTrans.row1.z;

		flip.row1.w = toTrans.row4.x;
		flip.row4.x = toTrans.row1.w;

		flip.row2.z = toTrans.row3.y;
		flip.row3.y = toTrans.row2.z;

		flip.row2.w = toTrans.row4.y;
		flip.row4.y = toTrans.row2.w;

		flip.row3.w = toTrans.row4.z;
		flip.row4.z = toTrans.row3.w;

		return flip;
	}

	void fileIO(std::string levelToRender) {
		//FILE IO START
		Parser parser;
		std::string line;
		std::ifstream meshData;
		meshData.open(levelToRender);
		if (meshData.is_open())
		{
			std::string delimiter1 = "(";
			std::string delimiter2 = ")";
			while (getline(meshData, line))
			{
				if (line == "MESH") {
					GW::MATH::GMATRIXF meshWorldMatrix = GW::MATH::GIdentityMatrixF;
					for (int i = 0; i < 6; i++) {
						if (i >= 2 && i <= 5) {
							std::string lineCpy = line;
							lineCpy = lineCpy.substr(lineCpy.find(delimiter1) + 1, lineCpy.find(delimiter2) - 13);
							std::string delimiter3 = ",";
							for (int j = 0; j < 4; ++j) {
								std::string numberFound = lineCpy.substr(0, lineCpy.find(delimiter3));
								float number = std::stof(numberFound);
								lineCpy = lineCpy.substr(lineCpy.find(delimiter3) + 1);
								if (i == 2) {
									if (j == 0) {
										meshWorldMatrix.row1.x = number;
									}
									else if (j == 1) {
										meshWorldMatrix.row1.y = number;
									}
									else if (j == 2) {
										meshWorldMatrix.row1.z = number;
									}
									else if (j == 3) {
										meshWorldMatrix.row1.w = number;
									}
								}
								else if (i == 3) {
									if (j == 0) {
										meshWorldMatrix.row2.x = number;
									}
									else if (j == 1) {
										meshWorldMatrix.row2.y = number;
									}
									else if (j == 2) {
										meshWorldMatrix.row2.z = number;
									}
									else if (j == 3) {
										meshWorldMatrix.row2.w = number;
									}
								}
								else if (i == 4) {
									if (j == 0) {
										meshWorldMatrix.row3.x = number;
									}
									else if (j == 1) {
										meshWorldMatrix.row3.y = number;
									}
									else if (j == 2) {
										meshWorldMatrix.row3.z = number;
									}
									else if (j == 3) {
										meshWorldMatrix.row3.w = number;
									}
								}
								else if (i == 5) {
									if (j == 0) {
										meshWorldMatrix.row4.x = number;
									}
									else if (j == 1) {
										meshWorldMatrix.row4.y = number;
									}
									else if (j == 2) {
										meshWorldMatrix.row4.z = number;
									}
									else if (j == 3) {
										meshWorldMatrix.row4.w = number;
									}
								}
								//std::cout << number << "   ";
							}
						}
						else if (i == 1) {
							std::string possibleFile = "../Assets/" + line + ".h2b";
							parser.Parse(possibleFile.c_str());
							Model newMod(parser, ogl);

							// New stuff
							glGenVertexArrays(1, newMod.getVertexArray());
							glBindVertexArray(*newMod.getVertexArray());

							glGenBuffers(1, newMod.getVertexArrayBufferObject());
							glBindBuffer(GL_ARRAY_BUFFER, *newMod.getVertexArrayBufferObject());
							glBufferData(GL_ARRAY_BUFFER, sizeof(H2B::VERTEX) * newMod.vertices.size(), newMod.vertices.data(), GL_STATIC_DRAW);
							glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(H2B::VERTEX), (void*)0);
							glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(H2B::VERTEX), (void*)12);
							glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(H2B::VERTEX), (void*)24);
							glEnableVertexAttribArray(0);
							glEnableVertexAttribArray(1);
							glEnableVertexAttribArray(2);

							glGenBuffers(1, newMod.getIndexBuffer());
							glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, *newMod.getIndexBuffer());
							glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * newMod.indices.size(), newMod.indices.data(), GL_STATIC_DRAW);


							headerModelData.push_back(newMod);
							parser.Clear();
						}
						std::cout << line << '\n';
						if (i != 5) {
							getline(meshData, line);
						}
					}
					worldMatrices.push_back(meshWorldMatrix);
					std::cout << '\n';
				}

				//std::string possibleFile = "../Assets/" + line + ".h2b";
				//std::string miscInfo;
				//std::ifstream objData;
				//objData.open(possibleFile, std::ios::binary | std::ios::in);
				//if (objData.is_open()) {
				//	while (getline(objData, miscInfo)) {
				//		//std::cout << miscInfo << '\n';
				//		//objData.read((char*)miscInfo.c_str(), sizeof(std::string));
				//	}
				//	objData.close();
				//}
			}
			meshData.close();
		}

		else std::cout << "Unable to open file";
		//FILE IO END

		boundingZones();

	}

	void boundingZones() {
		for (int i = 0; i < headerModelData.size(); ++i) {

			GW::MATH::GVECTORF largestVertice = { 0.0f, 0.0f, 0.0f, 0.0f };
			GW::MATH::GVECTORF smallestVertice = { 0.0f, 0.0f, 0.0f, 0.0f };

			for (int j = 0; j < headerModelData[i].vertices.size(); ++j) {

				float currentX = headerModelData[i].vertices[j].pos.x;
				float currentY = headerModelData[i].vertices[j].pos.y;
				float currentZ = headerModelData[i].vertices[j].pos.z;
				//See if the current x is larger or smaller than the current vertice
				if (currentX > largestVertice.x) {
					largestVertice.x = currentX;
				}
				else if (currentX < smallestVertice.x) {
					smallestVertice.x = currentX;
				}
				//See if the current y is larger or smaller than the current vertice
				if (currentY > largestVertice.y) {
					largestVertice.y = currentY;
				}
				else if (currentY < smallestVertice.y) {
					smallestVertice.y = currentY;
				}
				//See if the current z is larger or smaller than the current vertice
				if (currentZ > largestVertice.z) {
					largestVertice.z = currentZ;
				}
				else if (currentZ < smallestVertice.z) {
					smallestVertice.z = currentZ;
				}
			}

			GW::MATH::GVECTORF dif = subVector(largestVertice, smallestVertice);
			GW::MATH::GVECTORF difX = { dif.x, 0.0f, 0.0f };
			GW::MATH::GVECTORF difY = { 0.0f, dif.y, 0.0f };
			GW::MATH::GVECTORF difZ = { 0.0f, 0.0f, dif.z };
			GW::MATH::GVECTORF difXY = { dif.x, dif.y, 0.0f };
			GW::MATH::GVECTORF difYZ = { 0.0f, dif.y, dif.z };
			GW::MATH::GVECTORF difXZ = { dif.x, 0.0f, dif.z };

			headerModelData[i].smallestVertice = smallestVertice;
			headerModelData[i].largestVertice = largestVertice;

			headerModelData[i].bBoxVertices.push_back(smallestVertice);
			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difX));

			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difX));
			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difXY));

			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difXY));
			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difY));

			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difY));
			headerModelData[i].bBoxVertices.push_back(smallestVertice);



			headerModelData[i].bBoxVertices.push_back(smallestVertice);
			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difZ));

			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difY));
			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difYZ));

			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difXY));
			headerModelData[i].bBoxVertices.push_back(largestVertice);

			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difX));
			headerModelData[i].bBoxVertices.push_back(addVector(smallestVertice, difXZ));



			headerModelData[i].bBoxVertices.push_back(largestVertice);
			headerModelData[i].bBoxVertices.push_back(subVector(largestVertice, difX));

			headerModelData[i].bBoxVertices.push_back(subVector(largestVertice, difX));
			headerModelData[i].bBoxVertices.push_back(subVector(largestVertice, difXY));

			headerModelData[i].bBoxVertices.push_back(subVector(largestVertice, difXY));
			headerModelData[i].bBoxVertices.push_back(subVector(largestVertice, difY));

			headerModelData[i].bBoxVertices.push_back(subVector(largestVertice, difY));
			headerModelData[i].bBoxVertices.push_back(largestVertice);


			glGenVertexArrays(1, &headerModelData[i].bBoxVertexArray);
			glBindVertexArray(headerModelData[i].bBoxVertexArray);

			glGenBuffers(1, &headerModelData[i].bBoxVertexBufferObject);
			glBindBuffer(GL_ARRAY_BUFFER, headerModelData[i].bBoxVertexBufferObject);
			glBufferData(GL_ARRAY_BUFFER, sizeof(GW::MATH::GVECTORF) * headerModelData[i].bBoxVertices.size(), headerModelData[i].bBoxVertices.data(), GL_STATIC_DRAW);

			glEnableVertexAttribArray(0);
			glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(GW::MATH::GVECTORF), (void*)0);
		}
	}

	GW::MATH::GVECTORF subVector(GW::MATH::GVECTORF vec1, GW::MATH::GVECTORF vec2) {
		GW::MATH::GVECTORF dif = { vec1.x - vec2.x, vec1.y - vec2.y, vec1.z - vec2.z };
		return dif;
	}

	GW::MATH::GVECTORF addVector(GW::MATH::GVECTORF vec1, GW::MATH::GVECTORF vec2) {
		GW::MATH::GVECTORF add = { vec1.x + vec2.x, vec1.y + vec2.y, vec1.z + vec2.z };
		return add;
	}

	unsigned int loadCubemap(std::vector<std::string> faces)
	{
		unsigned int textHandle;
		glGenTextures(1, &textHandle);
		glBindTexture(GL_TEXTURE_CUBE_MAP, textHandle);

		int width, height, channels;
		for (unsigned int i = 0; i < faces.size(); i++)
		{
			unsigned char* data = stbi_load(faces[i].c_str(), &width, &height, &channels, 0);
			if (data)
			{
				glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
				stbi_image_free(data);
			}
			else
			{
				std::cout << "Cubemap tex failed to load at path: " << faces[i] << std::endl;
				stbi_image_free(data);
			}
		}
		glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
		glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
		glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);

		return textHandle;
	}

	~Renderer()
	{
		// free resources
		glDeleteVertexArrays(1, &vertexArray);
		glDeleteBuffers(1, &vertexBufferObject);
		glDeleteShader(vertexShader);
		glDeleteShader(fragmentShader);
		glDeleteProgram(shaderExecutable);

		glDeleteBuffers(1, &indexBuffer);
	}
private:
	// Modern OpenGL API Functions must be queried before use
	PFNGLCREATESHADERPROC				glCreateShader = nullptr;
	PFNGLSHADERSOURCEPROC				glShaderSource = nullptr;
	PFNGLCOMPILESHADERPROC				glCompileShader = nullptr;
	PFNGLGETSHADERIVPROC				glGetShaderiv = nullptr;
	PFNGLGETSHADERINFOLOGPROC			glGetShaderInfoLog = nullptr;
	PFNGLATTACHSHADERPROC				glAttachShader = nullptr;
	PFNGLDETACHSHADERPROC				glDetachShader = nullptr;
	PFNGLDELETESHADERPROC				glDeleteShader = nullptr;
	PFNGLCREATEPROGRAMPROC				glCreateProgram = nullptr;
	PFNGLLINKPROGRAMPROC				glLinkProgram = nullptr;
	PFNGLUSEPROGRAMPROC					glUseProgram = nullptr;
	PFNGLGETPROGRAMIVPROC				glGetProgramiv = nullptr;
	PFNGLGETPROGRAMINFOLOGPROC			glGetProgramInfoLog = nullptr;
	PFNGLGENVERTEXARRAYSPROC			glGenVertexArrays = nullptr;
	PFNGLBINDVERTEXARRAYPROC			glBindVertexArray = nullptr;
	PFNGLGENBUFFERSPROC					glGenBuffers = nullptr;
	PFNGLBINDBUFFERPROC					glBindBuffer = nullptr;
	PFNGLBUFFERDATAPROC					glBufferData = nullptr;
	PFNGLENABLEVERTEXATTRIBARRAYPROC	glEnableVertexAttribArray = nullptr;
	PFNGLDISABLEVERTEXATTRIBARRAYPROC	glDisableVertexAttribArray = nullptr;
	PFNGLVERTEXATTRIBPOINTERPROC		glVertexAttribPointer = nullptr;
	PFNGLGETUNIFORMLOCATIONPROC			glGetUniformLocation = nullptr;
	PFNGLUNIFORMMATRIX4FVPROC			glUniformMatrix4fv = nullptr;
	PFNGLDELETEBUFFERSPROC				glDeleteBuffers = nullptr;
	PFNGLDELETEPROGRAMPROC				glDeleteProgram = nullptr;
	PFNGLDELETEVERTEXARRAYSPROC			glDeleteVertexArrays = nullptr;
	PFNGLDEBUGMESSAGECALLBACKPROC		glDebugMessageCallback = nullptr;
	PFNGLACTIVETEXTUREPROC				glActiveTexture = nullptr;
	PFNGLGETUNIFORMBLOCKINDEXPROC		glGetUniformBlockIndex = nullptr;
	PFNGLBINDBUFFERBASEPROC				glBindBufferBase = nullptr;
	PFNGLUNIFORMBLOCKBINDINGPROC		glUniformBlockBinding = nullptr;
	PFNGLMAPBUFFERPROC					glMapBuffer = nullptr;
	PFNGLUNMAPBUFFERPROC				glUnmapBuffer = nullptr;

	// Modern OpenGL API functions need to be queried
	void LoadExtensions()
	{
		ogl.QueryExtensionFunction(nullptr, "glCreateShader", (void**)&glCreateShader);
		ogl.QueryExtensionFunction(nullptr, "glShaderSource", (void**)&glShaderSource);
		ogl.QueryExtensionFunction(nullptr, "glCompileShader", (void**)&glCompileShader);
		ogl.QueryExtensionFunction(nullptr, "glGetShaderiv", (void**)&glGetShaderiv);
		ogl.QueryExtensionFunction(nullptr, "glGetShaderInfoLog", (void**)&glGetShaderInfoLog);
		ogl.QueryExtensionFunction(nullptr, "glAttachShader", (void**)&glAttachShader);
		ogl.QueryExtensionFunction(nullptr, "glDetachShader", (void**)&glDetachShader);
		ogl.QueryExtensionFunction(nullptr, "glDeleteShader", (void**)&glDeleteShader);
		ogl.QueryExtensionFunction(nullptr, "glCreateProgram", (void**)&glCreateProgram);
		ogl.QueryExtensionFunction(nullptr, "glLinkProgram", (void**)&glLinkProgram);
		ogl.QueryExtensionFunction(nullptr, "glUseProgram", (void**)&glUseProgram);
		ogl.QueryExtensionFunction(nullptr, "glGetProgramiv", (void**)&glGetProgramiv);
		ogl.QueryExtensionFunction(nullptr, "glGetProgramInfoLog", (void**)&glGetProgramInfoLog);
		ogl.QueryExtensionFunction(nullptr, "glGenVertexArrays", (void**)&glGenVertexArrays);
		ogl.QueryExtensionFunction(nullptr, "glBindVertexArray", (void**)&glBindVertexArray);
		ogl.QueryExtensionFunction(nullptr, "glGenBuffers", (void**)&glGenBuffers);
		ogl.QueryExtensionFunction(nullptr, "glBindBuffer", (void**)&glBindBuffer);
		ogl.QueryExtensionFunction(nullptr, "glBufferData", (void**)&glBufferData);
		ogl.QueryExtensionFunction(nullptr, "glEnableVertexAttribArray", (void**)&glEnableVertexAttribArray);
		ogl.QueryExtensionFunction(nullptr, "glDisableVertexAttribArray", (void**)&glDisableVertexAttribArray);
		ogl.QueryExtensionFunction(nullptr, "glVertexAttribPointer", (void**)&glVertexAttribPointer);
		ogl.QueryExtensionFunction(nullptr, "glGetUniformLocation", (void**)&glGetUniformLocation);
		ogl.QueryExtensionFunction(nullptr, "glUniformMatrix4fv", (void**)&glUniformMatrix4fv);
		ogl.QueryExtensionFunction(nullptr, "glDeleteBuffers", (void**)&glDeleteBuffers);
		ogl.QueryExtensionFunction(nullptr, "glDeleteProgram", (void**)&glDeleteProgram);
		ogl.QueryExtensionFunction(nullptr, "glDeleteVertexArrays", (void**)&glDeleteVertexArrays);
		ogl.QueryExtensionFunction(nullptr, "glDebugMessageCallback", (void**)&glDebugMessageCallback);

		ogl.QueryExtensionFunction(nullptr, "glGetUniformBlockIndex", (void**)&glGetUniformBlockIndex);
		ogl.QueryExtensionFunction(nullptr, "glBindBufferBase", (void**)&glBindBufferBase);
		ogl.QueryExtensionFunction(nullptr, "glUniformBlockBinding", (void**)&glUniformBlockBinding);
		ogl.QueryExtensionFunction(nullptr, "glMapBuffer", (void**)&glMapBuffer);
		ogl.QueryExtensionFunction(nullptr, "glUnmapBuffer", (void**)&glUnmapBuffer);
		ogl.QueryExtensionFunction(nullptr, "glActiveTexture", (void**)&glActiveTexture);
	}
};
