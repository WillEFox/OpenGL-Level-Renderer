// "Grass_1.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Grass_1.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Grass_1_version_
const char Grass_1_version[4] = { '0','1','9','d' };
#define _Grass_1_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Grass_1_vertexcount_
const unsigned Grass_1_vertexcount = 25;
#define _Grass_1_vertexcount_
#endif
#ifndef _Grass_1_indexcount_
const unsigned Grass_1_indexcount = 120;
#define _Grass_1_indexcount_
#endif
#ifndef _Grass_1_materialcount_
const unsigned Grass_1_materialcount = 1; // can be used for batched draws
#define _Grass_1_materialcount_
#endif
#ifndef _Grass_1_meshcount_
const unsigned Grass_1_meshcount = 1;
#define _Grass_1_meshcount_
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
#ifndef _Grass_1_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Grass_1_vertices[25] =
{
	{	{ -0.155351f, 1.162390f, -0.137102f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.476900f, 0.533400f, -0.698500f }	},
	{	{ -0.030492f, 0.983265f, -0.151202f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.589800f, 0.487900f, -0.643500f }	},
	{	{ -0.198822f, 0.965566f, -0.197819f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.029300f, 0.129400f, -0.991100f }	},
	{	{ -0.273599f, 1.093005f, -0.182803f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.103700f, 0.179600f, -0.978200f }	},
	{	{ -0.372420f, 1.261422f, -0.123872f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.332100f, 0.566000f, -0.754600f }	},
	{	{ -0.264280f, 1.266178f, -0.095677f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.295700f, 0.725000f, -0.622000f }	},
	{	{ -0.391848f, 1.023621f, -0.137102f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.703500f, -0.168500f, -0.690400f }	},
	{	{ -0.429320f, 1.169338f, -0.095677f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.777200f, 0.095500f, -0.622000f }	},
	{	{ -0.357084f, 0.948843f, -0.142742f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.611200f, -0.239800f, -0.754300f }	},
	{	{ -0.404664f, 0.949078f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.904800f, -0.425800f, -0.000000f }	},
	{	{ -0.431264f, 1.000493f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.947500f, -0.319600f, -0.000000f }	},
	{	{ -0.479258f, 1.198733f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.982900f, 0.184100f, -0.000000f }	},
	{	{ -0.391848f, 1.023621f, 0.137102f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.703500f, -0.168500f, 0.690400f }	},
	{	{ -0.429320f, 1.169338f, 0.095677f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.777200f, 0.095500f, 0.622000f }	},
	{	{ -0.357084f, 0.948843f, 0.142741f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.611200f, -0.239800f, 0.754300f }	},
	{	{ -0.198822f, 0.965566f, 0.197819f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.029300f, 0.129400f, 0.991100f }	},
	{	{ -0.273599f, 1.093005f, 0.182802f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.103700f, 0.179600f, 0.978200f }	},
	{	{ -0.372420f, 1.261422f, 0.123872f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.332100f, 0.566000f, 0.754500f }	},
	{	{ -0.155351f, 1.162390f, 0.137102f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.476900f, 0.533400f, 0.698500f }	},
	{	{ -0.264280f, 1.266178f, 0.095677f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.295700f, 0.725000f, 0.622000f }	},
	{	{ -0.030492f, 0.983265f, 0.151201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.589800f, 0.487900f, 0.643500f }	},
	{	{ -0.265582f, 1.324111f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.318700f, 0.947800f, -0.000000f }	},
	{	{ -0.405361f, 1.317561f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.506100f, 0.862500f, -0.000000f }	},
	{	{ 0.043507f, 0.993507f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.786800f, 0.617200f, -0.000000f }	},
	{	{ -0.115934f, 1.185518f, -0.000000f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.725700f, 0.688000f, -0.000000f }	},
};
#define _Grass_1_vertices_
#endif
#ifndef _Grass_1_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Grass_1_indices[120] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 5, 0,
	 3, 4, 0,
	 6, 7, 4,
	 3, 6, 4,
	 2, 8, 6,
	 3, 2, 6,
	 6, 8, 9,
	 10, 6, 9,
	 11, 7, 6,
	 10, 11, 6,
	 12, 13, 11,
	 10, 12, 11,
	 9, 14, 12,
	 10, 9, 12,
	 12, 14, 15,
	 16, 12, 15,
	 17, 13, 12,
	 16, 17, 12,
	 18, 19, 17,
	 16, 18, 17,
	 15, 20, 18,
	 16, 15, 18,
	 17, 19, 21,
	 22, 17, 21,
	 11, 13, 17,
	 22, 11, 17,
	 4, 7, 11,
	 22, 4, 11,
	 21, 5, 4,
	 22, 21, 4,
	 18, 20, 23,
	 24, 18, 23,
	 21, 19, 18,
	 24, 21, 18,
	 0, 5, 21,
	 24, 0, 21,
	 23, 1, 0,
	 24, 23, 0,
};
#define _Grass_1_indices_
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
#ifndef _Grass_1_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Grass_1_materials[1] =
{
	{
		{{ 0.250294f, 0.328747f, 0.018225f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Green_Light",
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
#define _Grass_1_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Grass_1_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Grass_1_batches[1][2] =
{
	{ 120, 0 },
};
#define _Grass_1_batches_
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
#ifndef _Grass_1_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Grass_1_meshes[1] =
{
	{
		"default",
		120,
		0,
		0,
	},
};
#define _Grass_1_meshes_
#endif
