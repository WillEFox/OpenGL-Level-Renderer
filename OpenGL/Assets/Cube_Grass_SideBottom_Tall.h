// "Cube_Grass_SideBottom_Tall.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Cube_Grass_SideBottom_Tall.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Cube_Grass_SideBottom_Tall_version_
const char Cube_Grass_SideBottom_Tall_version[4] = { '0','1','9','d' };
#define _Cube_Grass_SideBottom_Tall_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Cube_Grass_SideBottom_Tall_vertexcount_
const unsigned Cube_Grass_SideBottom_Tall_vertexcount = 22;
#define _Cube_Grass_SideBottom_Tall_vertexcount_
#endif
#ifndef _Cube_Grass_SideBottom_Tall_indexcount_
const unsigned Cube_Grass_SideBottom_Tall_indexcount = 54;
#define _Cube_Grass_SideBottom_Tall_indexcount_
#endif
#ifndef _Cube_Grass_SideBottom_Tall_materialcount_
const unsigned Cube_Grass_SideBottom_Tall_materialcount = 3; // can be used for batched draws
#define _Cube_Grass_SideBottom_Tall_materialcount_
#endif
#ifndef _Cube_Grass_SideBottom_Tall_meshcount_
const unsigned Cube_Grass_SideBottom_Tall_meshcount = 3;
#define _Cube_Grass_SideBottom_Tall_meshcount_
#endif
/************************************************/
/*  This section contains the raw data to load  */
/************************************************/
#ifndef __OBJ_VEC3__
typedef struct _OBJ_VEC3_
{
	float x,y,z; // 3D Coordinate.
}OBJ_VEC3;
#define __OBJ_VEC3__
#endif
#ifndef __OBJ_VERT__
typedef struct _OBJ_VERT_
{
	OBJ_VEC3 pos; // Left-handed +Z forward coordinate w not provided, assumed to be 1.
	OBJ_VEC3 uvw; // D3D/Vulkan style top left 0,0 coordinate.
	OBJ_VEC3 nrm; // Provided direct from obj file, may or may not be normalized.
}OBJ_VERT;
#define __OBJ_VERT__
#endif
#ifndef _Cube_Grass_SideBottom_Tall_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Cube_Grass_SideBottom_Tall_vertices[22] =
{
	{	{ -1.000000f, -1.000000f, 1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -1.000000f, -1.000000f, -0.873585f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.980800f, -0.195100f }	},
	{	{ 1.000000f, -1.000000f, -0.873585f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.980800f, -0.195100f }	},
	{	{ 1.000000f, -1.000000f, 1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ 1.000000f, -0.962974f, -0.962974f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.382700f, -0.923900f }	},
	{	{ -1.000000f, -0.962974f, -0.962974f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.382700f, -0.923900f }	},
	{	{ -1.000000f, -0.873585f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.195100f, -0.980800f }	},
	{	{ 1.000000f, -0.873585f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.195100f, -0.980800f }	},
	{	{ -1.000000f, -0.962974f, -0.962974f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.923900f, -0.382700f }	},
	{	{ 1.000000f, -0.962974f, -0.962974f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.923900f, -0.382700f }	},
	{	{ -1.000000f, -0.024298f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 1.000000f, -0.024298f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 1.000000f, -0.327668f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -1.000000f, -0.327668f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -1.000000f, 1.000000f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 1.000000f, 1.000000f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 1.000000f, 0.623989f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -1.000000f, 0.623989f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 1.000000f, 0.281256f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -1.000000f, 0.281256f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 1.000000f, -0.623989f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -1.000000f, -0.623989f, -1.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
};
#define _Cube_Grass_SideBottom_Tall_vertices_
#endif
#ifndef _Cube_Grass_SideBottom_Tall_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Cube_Grass_SideBottom_Tall_indices[54] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 5, 6,
	 7, 4, 6,
	 2, 1, 8,
	 9, 2, 8,
	 10, 11, 12,
	 13, 10, 12,
	 14, 15, 16,
	 17, 14, 16,
	 16, 18, 19,
	 17, 16, 19,
	 12, 20, 21,
	 13, 12, 21,
	 20, 7, 6,
	 21, 20, 6,
	 18, 11, 10,
	 19, 18, 10,
};
#define _Cube_Grass_SideBottom_Tall_indices_
#endif
// Part of an OBJ_MATERIAL, the struct is 16 byte aligned so it is GPU register friendly.
#ifndef __OBJ_ATTRIBUTES__
typedef struct _OBJ_ATTRIBUTES_
{
	OBJ_VEC3    Kd; // diffuse reflectivity
	float	    d; // dissolve (transparency) 
	OBJ_VEC3    Ks; // specular reflectivity
	float       Ns; // specular exponent
	OBJ_VEC3    Ka; // ambient reflectivity
	float       sharpness; // local reflection map sharpness
	OBJ_VEC3    Tf; // transmission filter
	float       Ni; // optical density (index of refraction)
	OBJ_VEC3    Ke; // emissive reflectivity
	unsigned    illum; // illumination model
}OBJ_ATTRIBUTES;
#define __OBJ_ATTRIBUTES__
#endif
// This structure also has been made GPU register friendly so it can be transfered directly if desired.
// Note: Total struct size will vary depenedening on CPU processor architecture (string pointers).
#ifndef __OBJ_MATERIAL__
typedef struct _OBJ_MATERIAL_
{
	// The following items are typically used in a pixel/fragment shader, they are packed for GPU registers.
	OBJ_ATTRIBUTES attrib; // Surface shading characteristics & illumination model
	// All items below this line are not needed on the GPU and are generally only used during load time.
	const char* name; // the name of this material
	// If the model's materials contain any specific texture data it will be located below.
	const char* map_Kd; // diffuse texture
	const char* map_Ks; // specular texture
	const char* map_Ka; // ambient texture
	const char* map_Ke; // emissive texture
	const char* map_Ns; // specular exponent texture
	const char* map_d; // transparency texture
	const char* disp; // roughness map (displacement)
	const char* decal; // decal texture (lerps texture & material colors)
	const char* bump; // normal/bumpmap texture
	void* padding[2]; // 16 byte alignment on 32bit or 64bit
}OBJ_MATERIAL;
#define __OBJ_MATERIAL__
#endif
#ifndef _Cube_Grass_SideBottom_Tall_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Cube_Grass_SideBottom_Tall_materials[3] =
{
	{
		{{ 0.389513f, 0.197571f, 0.081546f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Dirt_1",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
	},
	{
		{{ 0.254828f, 0.130745f, 0.055087f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Dirt_2",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
	},
	{
		{{ 0.629914f, 0.292244f, 0.135914f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Dirt_3",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
	},
};
#define _Cube_Grass_SideBottom_Tall_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Cube_Grass_SideBottom_Tall_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Cube_Grass_SideBottom_Tall_batches[3][2] =
{
	{ 30, 0 },
	{ 12, 30 },
	{ 12, 42 },
};
#define _Cube_Grass_SideBottom_Tall_batches_
#endif
#ifndef __OBJ_MESH__
typedef struct _OBJ_MESH_
{
	const char* name;
	unsigned    indexCount;
	unsigned    indexOffset;
	unsigned    materialIndex;
}OBJ_MESH;
#define __OBJ_MESH__
#endif
#ifndef _Cube_Grass_SideBottom_Tall_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Cube_Grass_SideBottom_Tall_meshes[3] =
{
	{
		"default",
		30,
		0,
		0,
	},
	{
		"default",
		12,
		30,
		1,
	},
	{
		"default",
		12,
		42,
		2,
	},
};
#define _Cube_Grass_SideBottom_Tall_meshes_
#endif
