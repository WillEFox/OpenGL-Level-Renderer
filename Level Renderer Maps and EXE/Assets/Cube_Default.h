// "Cube_Default.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Cube_Default.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Cube_Default_version_
const char Cube_Default_version[4] = { '0','1','9','d' };
#define _Cube_Default_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Cube_Default_vertexcount_
const unsigned Cube_Default_vertexcount = 240;
#define _Cube_Default_vertexcount_
#endif
#ifndef _Cube_Default_indexcount_
const unsigned Cube_Default_indexcount = 612;
#define _Cube_Default_indexcount_
#endif
#ifndef _Cube_Default_materialcount_
const unsigned Cube_Default_materialcount = 2; // can be used for batched draws
#define _Cube_Default_materialcount_
#endif
#ifndef _Cube_Default_meshcount_
const unsigned Cube_Default_meshcount = 2;
#define _Cube_Default_meshcount_
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
#ifndef _Cube_Default_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Cube_Default_vertices[240] =
{
	{	{ -0.707284f, -0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 0.707284f, -0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 0.878472f, -0.878472f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, -0.165500f, -0.972200f }	},
	{	{ -0.878472f, -0.878472f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, -0.165500f, -0.972200f }	},
	{	{ 1.010406f, -0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 1.010406f, 0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 1.010406f, 0.878472f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.972200f, 0.165500f, 0.165500f }	},
	{	{ 1.010406f, -0.878472f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.972200f, -0.165500f, 0.165500f }	},
	{	{ -1.010406f, 0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -1.010406f, 0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -1.010406f, 0.878472f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.972200f, 0.165500f, 0.165500f }	},
	{	{ -1.010406f, 0.878472f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.972200f, 0.165500f, -0.165500f }	},
	{	{ -0.707284f, 0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -0.878472f, 0.878472f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, 0.165500f, -0.972200f }	},
	{	{ 1.010406f, 0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 1.010406f, 0.878472f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.972200f, 0.165500f, -0.165500f }	},
	{	{ -0.677466f, -0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, -0.375100f }	},
	{	{ 0.677466f, -0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, -0.375100f }	},
	{	{ 0.707284f, -0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, -0.375100f }	},
	{	{ -0.707284f, -0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, -0.375100f }	},
	{	{ 0.707284f, 1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ -0.707284f, 1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ -0.878472f, 1.010406f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, 0.972200f, 0.165500f }	},
	{	{ 0.878472f, 1.010406f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, 0.972200f, 0.165500f }	},
	{	{ 0.707284f, -1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ 0.707284f, -1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ 0.878472f, -1.010406f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, -0.972200f, -0.165500f }	},
	{	{ 0.878472f, -1.010406f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, -0.972200f, 0.165500f }	},
	{	{ -0.707284f, -1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.878472f, -1.010406f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, -0.972200f, 0.165500f }	},
	{	{ -0.677466f, 0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, 0.927000f }	},
	{	{ 0.677466f, 0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, 0.927000f }	},
	{	{ 0.707284f, 1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, 0.927000f }	},
	{	{ -0.707284f, 1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, 0.927000f }	},
	{	{ 0.707284f, 0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 0.878472f, 0.878472f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, 0.165500f, -0.972200f }	},
	{	{ -0.707284f, 1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ -0.878472f, 1.010406f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, 0.972200f, -0.165500f }	},
	{	{ -0.707284f, 0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ 0.707284f, 0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ 0.878472f, 0.878472f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, 0.165500f, 0.972200f }	},
	{	{ -0.878472f, 0.878472f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, 0.165500f, 0.972200f }	},
	{	{ -0.936710f, 0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, -0.927000f }	},
	{	{ -0.936710f, -0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, -0.927000f }	},
	{	{ -1.010406f, -0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, -0.927000f }	},
	{	{ -1.010406f, 0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, -0.927000f }	},
	{	{ 0.707284f, -0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ 0.878472f, -0.878472f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, -0.165500f, 0.972200f }	},
	{	{ 0.707284f, 1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ 0.878472f, 1.010406f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.165500f, 0.972200f, -0.165500f }	},
	{	{ 0.936710f, 0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, -0.927000f, -0.000000f }	},
	{	{ 0.936710f, 0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, -0.927000f, -0.000000f }	},
	{	{ 1.010406f, 0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, -0.927000f, -0.000000f }	},
	{	{ 1.010406f, 0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, -0.927000f, -0.000000f }	},
	{	{ -0.707284f, -1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.878472f, -1.010406f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, -0.972200f, -0.165500f }	},
	{	{ -0.707284f, -0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ -0.878472f, -0.878472f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.165500f, -0.165500f, 0.972200f }	},
	{	{ -0.677466f, -0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, -0.927000f }	},
	{	{ 0.677466f, -0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, -0.927000f }	},
	{	{ 0.707284f, -1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, -0.927000f }	},
	{	{ -0.707284f, -1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, -0.927000f }	},
	{	{ -1.010406f, -0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -1.010406f, -0.878472f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.972200f, -0.165500f, -0.165500f }	},
	{	{ 1.010406f, -0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 1.010406f, -0.878472f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.972200f, -0.165500f, -0.165500f }	},
	{	{ -0.677466f, -0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, 0.375100f }	},
	{	{ -0.677466f, 0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, 0.375100f }	},
	{	{ -0.707284f, 0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, 0.375100f }	},
	{	{ -0.707284f, -0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, 0.375100f }	},
	{	{ -1.010406f, -0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -1.010406f, -0.878472f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.972200f, -0.165500f, 0.165500f }	},
	{	{ 0.936710f, -0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, -0.927000f }	},
	{	{ 0.936710f, 0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, -0.927000f }	},
	{	{ 1.010406f, 0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, -0.927000f }	},
	{	{ 1.010406f, -0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, -0.927000f }	},
	{	{ -0.936710f, -0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, 0.927000f }	},
	{	{ -0.936710f, 0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, 0.927000f }	},
	{	{ -1.010406f, 0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, 0.927000f }	},
	{	{ -1.010406f, -0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.000000f, 0.927000f }	},
	{	{ 0.936710f, 0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, 0.927000f }	},
	{	{ 0.936710f, -0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, 0.927000f }	},
	{	{ 1.010406f, -0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, 0.927000f }	},
	{	{ 1.010406f, 0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.000000f, 0.927000f }	},
	{	{ 0.936710f, -0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.927000f, -0.000000f }	},
	{	{ 0.936710f, -0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.927000f, -0.000000f }	},
	{	{ 1.010406f, -0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.927000f, -0.000000f }	},
	{	{ 1.010406f, -0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.375100f, 0.927000f, -0.000000f }	},
	{	{ -0.936710f, 0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, -0.927000f, -0.000000f }	},
	{	{ -0.936710f, 0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, -0.927000f, -0.000000f }	},
	{	{ -1.010406f, 0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, -0.927000f, -0.000000f }	},
	{	{ -1.010406f, 0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, -0.927000f, -0.000000f }	},
	{	{ -0.936710f, -0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.927000f, -0.000000f }	},
	{	{ -0.936710f, -0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.927000f, -0.000000f }	},
	{	{ -1.010406f, -0.707284f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.927000f, -0.000000f }	},
	{	{ -1.010406f, -0.707284f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.375100f, 0.927000f, -0.000000f }	},
	{	{ -0.677466f, 0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, -0.375100f }	},
	{	{ -0.677466f, -0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, -0.375100f }	},
	{	{ -0.707284f, -0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, -0.375100f }	},
	{	{ -0.707284f, 0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.000000f, -0.375100f }	},
	{	{ 0.677466f, 0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, 0.375100f }	},
	{	{ 0.677466f, -0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, 0.375100f }	},
	{	{ 0.707284f, -0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, 0.375100f }	},
	{	{ 0.707284f, 0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, 0.375100f }	},
	{	{ 0.677466f, -0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, 0.375100f }	},
	{	{ -0.677466f, -0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, 0.375100f }	},
	{	{ -0.707284f, -0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, 0.375100f }	},
	{	{ 0.707284f, -0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.927000f, 0.375100f }	},
	{	{ 0.677466f, 0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, -0.375100f }	},
	{	{ -0.677466f, 0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, -0.375100f }	},
	{	{ -0.707284f, 0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, -0.375100f }	},
	{	{ 0.707284f, 0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, -0.375100f }	},
	{	{ 0.677466f, -0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, -0.375100f }	},
	{	{ 0.677466f, 0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, -0.375100f }	},
	{	{ 0.707284f, 0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, -0.375100f }	},
	{	{ 0.707284f, -0.707284f, -1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.000000f, -0.375100f }	},
	{	{ -0.677466f, 0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, 0.375100f }	},
	{	{ 0.677466f, 0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, 0.375100f }	},
	{	{ 0.707284f, 0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, 0.375100f }	},
	{	{ -0.707284f, 0.707284f, 1.010406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.927000f, 0.375100f }	},
	{	{ 0.677466f, 0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, -0.927000f }	},
	{	{ -0.677466f, 0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, -0.927000f }	},
	{	{ -0.707284f, 1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, -0.927000f }	},
	{	{ 0.707284f, 1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.375100f, -0.927000f }	},
	{	{ 0.677466f, -0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, -0.375100f, -0.000000f }	},
	{	{ 0.677466f, -0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, -0.375100f, -0.000000f }	},
	{	{ 0.707284f, -1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, -0.375100f, -0.000000f }	},
	{	{ 0.707284f, -1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, -0.375100f, -0.000000f }	},
	{	{ -0.677466f, -0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, -0.375100f, -0.000000f }	},
	{	{ -0.677466f, -0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, -0.375100f, -0.000000f }	},
	{	{ -0.707284f, -1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, -0.375100f, -0.000000f }	},
	{	{ -0.707284f, -1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, -0.375100f, -0.000000f }	},
	{	{ 0.677466f, 0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.375100f, -0.000000f }	},
	{	{ 0.677466f, 0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.375100f, -0.000000f }	},
	{	{ 0.707284f, 1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.375100f, -0.000000f }	},
	{	{ 0.707284f, 1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.927000f, 0.375100f, -0.000000f }	},
	{	{ -0.677466f, 0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.375100f, -0.000000f }	},
	{	{ -0.677466f, 0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.375100f, -0.000000f }	},
	{	{ -0.707284f, 1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.375100f, -0.000000f }	},
	{	{ -0.707284f, 1.010406f, 0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.927000f, 0.375100f, -0.000000f }	},
	{	{ 0.677466f, -0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, 0.927000f }	},
	{	{ -0.677466f, -0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, 0.927000f }	},
	{	{ -0.707284f, -1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, 0.927000f }	},
	{	{ 0.707284f, -1.010406f, -0.707284f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -0.375100f, 0.927000f }	},
	{	{ -0.971763f, -0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, -0.934100f, -0.133600f }	},
	{	{ -0.961767f, -0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, -0.924300f, -0.269900f }	},
	{	{ -0.878472f, -0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, -0.934100f, -0.331000f }	},
	{	{ -0.878472f, -0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, -0.331000f, -0.934100f }	},
	{	{ -0.961767f, -0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, -0.269900f, -0.924300f }	},
	{	{ -0.971763f, -0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, -0.133600f, -0.934100f }	},
	{	{ -0.971763f, -0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, -0.133600f, -0.331000f }	},
	{	{ -0.961767f, -0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.924300f, -0.269900f, -0.269900f }	},
	{	{ -0.971763f, -0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, -0.331000f, -0.133600f }	},
	{	{ -0.971763f, 0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, 0.133600f, -0.934100f }	},
	{	{ -0.961767f, 0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, 0.269900f, -0.924300f }	},
	{	{ -0.878472f, 0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, 0.331000f, -0.934100f }	},
	{	{ -0.878472f, 0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, 0.934100f, -0.331000f }	},
	{	{ -0.961767f, 0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, 0.924300f, -0.269900f }	},
	{	{ -0.971763f, 0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, 0.934100f, -0.133600f }	},
	{	{ -0.971763f, 0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, 0.331000f, -0.133600f }	},
	{	{ -0.961767f, 0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.924300f, 0.269900f, -0.269900f }	},
	{	{ -0.971763f, 0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, 0.133600f, -0.331000f }	},
	{	{ -0.971763f, -0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, -0.331000f, 0.133600f }	},
	{	{ -0.961767f, -0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.924300f, -0.269900f, 0.269900f }	},
	{	{ -0.971763f, -0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, -0.133600f, 0.331000f }	},
	{	{ -0.971763f, -0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, -0.133600f, 0.934100f }	},
	{	{ -0.961767f, -0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, -0.269900f, 0.924300f }	},
	{	{ -0.878472f, -0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, -0.331000f, 0.934100f }	},
	{	{ -0.878472f, -0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, -0.934100f, 0.331000f }	},
	{	{ -0.961767f, -0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, -0.924300f, 0.269900f }	},
	{	{ -0.971763f, -0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, -0.934100f, 0.133600f }	},
	{	{ -0.971763f, 0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, 0.934100f, 0.133600f }	},
	{	{ -0.961767f, 0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, 0.924300f, 0.269900f }	},
	{	{ -0.878472f, 0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, 0.934100f, 0.331000f }	},
	{	{ -0.878472f, 0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.133600f, 0.331000f, 0.934100f }	},
	{	{ -0.961767f, 0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.269900f, 0.269900f, 0.924300f }	},
	{	{ -0.971763f, 0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.331000f, 0.133600f, 0.934100f }	},
	{	{ -0.971763f, 0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, 0.133600f, 0.331000f }	},
	{	{ -0.961767f, 0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.924300f, 0.269900f, 0.269900f }	},
	{	{ -0.971763f, 0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.934100f, 0.331000f, 0.133600f }	},
	{	{ 0.971763f, -0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, -0.331000f, -0.133600f }	},
	{	{ 0.961767f, -0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.924300f, -0.269900f, -0.269900f }	},
	{	{ 0.971763f, -0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, -0.133600f, -0.331000f }	},
	{	{ 0.971763f, -0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, -0.133600f, -0.934100f }	},
	{	{ 0.961767f, -0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, -0.269900f, -0.924300f }	},
	{	{ 0.878472f, -0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, -0.331000f, -0.934100f }	},
	{	{ 0.878472f, -0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, -0.934100f, -0.331000f }	},
	{	{ 0.961767f, -0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, -0.924300f, -0.269900f }	},
	{	{ 0.971763f, -0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, -0.934100f, -0.133600f }	},
	{	{ 0.971763f, 0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, 0.934100f, -0.133600f }	},
	{	{ 0.961767f, 0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, 0.924300f, -0.269900f }	},
	{	{ 0.878472f, 0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, 0.934100f, -0.331000f }	},
	{	{ 0.878472f, 0.971763f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, 0.331000f, -0.934100f }	},
	{	{ 0.961767f, 0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, 0.269900f, -0.924300f }	},
	{	{ 0.971763f, 0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, 0.133600f, -0.934100f }	},
	{	{ 0.971763f, 0.878472f, -0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, 0.133600f, -0.331000f }	},
	{	{ 0.961767f, 0.961767f, -0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.924300f, 0.269900f, -0.269900f }	},
	{	{ 0.971763f, 0.971763f, -0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, 0.331000f, -0.133600f }	},
	{	{ 0.878472f, -0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, -0.331000f, 0.934100f }	},
	{	{ 0.961767f, -0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, -0.269900f, 0.924300f }	},
	{	{ 0.971763f, -0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, -0.133600f, 0.934100f }	},
	{	{ 0.971763f, -0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, -0.133600f, 0.331000f }	},
	{	{ 0.961767f, -0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.924300f, -0.269900f, 0.269900f }	},
	{	{ 0.971763f, -0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, -0.331000f, 0.133600f }	},
	{	{ 0.971763f, -0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, -0.934100f, 0.133600f }	},
	{	{ 0.961767f, -0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, -0.924300f, 0.269900f }	},
	{	{ 0.878472f, -0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, -0.934100f, 0.331000f }	},
	{	{ 0.878472f, 0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, 0.934100f, 0.331000f }	},
	{	{ 0.961767f, 0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, 0.924300f, 0.269900f }	},
	{	{ 0.971763f, 0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, 0.934100f, 0.133600f }	},
	{	{ 0.971763f, 0.971763f, 0.878472f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, 0.331000f, 0.133600f }	},
	{	{ 0.961767f, 0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.924300f, 0.269900f, 0.269900f }	},
	{	{ 0.971763f, 0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.934100f, 0.133600f, 0.331000f }	},
	{	{ 0.971763f, 0.878472f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.331000f, 0.133600f, 0.934100f }	},
	{	{ 0.961767f, 0.961767f, 0.961767f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269900f, 0.269900f, 0.924300f }	},
	{	{ 0.878472f, 0.971763f, 0.971763f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.133600f, 0.331000f, 0.934100f }	},
	{	{ 0.936710f, -0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 0.936710f, 0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 0.936710f, 0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ 0.936710f, -0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 1.000000f, 0.000000f, -0.000000f }	},
	{	{ -0.936710f, -0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -0.936710f, 0.677466f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -0.936710f, 0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ -0.936710f, -0.677466f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -1.000000f, 0.000000f, -0.000000f }	},
	{	{ 0.677466f, -0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ 0.677466f, 0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ -0.677466f, 0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ -0.677466f, -0.677466f, 0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, 1.000000f }	},
	{	{ -0.677466f, -0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ -0.677466f, 0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 0.677466f, 0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 0.677466f, -0.677466f, -0.936710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 0.000000f, -1.000000f }	},
	{	{ 0.677466f, 0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ -0.677466f, 0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ -0.677466f, 0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ 0.677466f, 0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, 1.000000f, -0.000000f }	},
	{	{ -0.677466f, -0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ 0.677466f, -0.936710f, -0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ 0.677466f, -0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
	{	{ -0.677466f, -0.936710f, 0.677466f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.000000f, -1.000000f, -0.000000f }	},
};
#define _Cube_Default_vertices_
#endif
#ifndef _Cube_Default_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Cube_Default_indices[612] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 5, 6,
	 7, 4, 6,
	 8, 9, 10,
	 11, 8, 10,
	 12, 0, 3,
	 13, 12, 3,
	 5, 14, 15,
	 6, 5, 15,
	 16, 17, 18,
	 19, 16, 18,
	 20, 21, 22,
	 23, 20, 22,
	 24, 25, 26,
	 27, 24, 26,
	 28, 24, 27,
	 29, 28, 27,
	 30, 31, 32,
	 33, 30, 32,
	 34, 12, 13,
	 35, 34, 13,
	 21, 36, 37,
	 22, 21, 37,
	 38, 39, 40,
	 41, 38, 40,
	 42, 43, 44,
	 45, 42, 44,
	 39, 46, 47,
	 40, 39, 47,
	 48, 20, 23,
	 49, 48, 23,
	 1, 34, 35,
	 2, 1, 35,
	 50, 51, 52,
	 53, 50, 52,
	 36, 48, 49,
	 37, 36, 49,
	 25, 54, 55,
	 26, 25, 55,
	 56, 38, 41,
	 57, 56, 41,
	 58, 59, 60,
	 61, 58, 60,
	 46, 56, 57,
	 47, 46, 57,
	 62, 8, 11,
	 63, 62, 11,
	 64, 4, 7,
	 65, 64, 7,
	 66, 67, 68,
	 69, 66, 68,
	 70, 62, 63,
	 71, 70, 63,
	 9, 70, 71,
	 10, 9, 71,
	 14, 64, 65,
	 15, 14, 65,
	 72, 73, 74,
	 75, 72, 74,
	 76, 77, 78,
	 79, 76, 78,
	 80, 81, 82,
	 83, 80, 82,
	 84, 85, 86,
	 87, 84, 86,
	 88, 89, 90,
	 91, 88, 90,
	 92, 93, 94,
	 95, 92, 94,
	 96, 97, 98,
	 99, 96, 98,
	 100, 101, 102,
	 103, 100, 102,
	 104, 105, 106,
	 107, 104, 106,
	 108, 109, 110,
	 111, 108, 110,
	 112, 113, 114,
	 115, 112, 114,
	 116, 117, 118,
	 119, 116, 118,
	 120, 121, 122,
	 123, 120, 122,
	 124, 125, 126,
	 127, 124, 126,
	 128, 129, 130,
	 131, 128, 130,
	 132, 133, 134,
	 135, 132, 134,
	 136, 137, 138,
	 139, 136, 138,
	 140, 141, 142,
	 143, 140, 142,
	 144, 145, 146,
	 55, 144, 146,
	 147, 148, 149,
	 3, 147, 149,
	 150, 151, 152,
	 63, 150, 152,
	 153, 154, 155,
	 13, 153, 155,
	 156, 157, 158,
	 37, 156, 158,
	 159, 160, 161,
	 11, 159, 161,
	 162, 163, 164,
	 71, 162, 164,
	 165, 166, 167,
	 57, 165, 167,
	 168, 169, 170,
	 29, 168, 170,
	 171, 172, 173,
	 22, 171, 173,
	 174, 175, 176,
	 41, 174, 176,
	 177, 178, 179,
	 10, 177, 179,
	 180, 181, 182,
	 65, 180, 182,
	 183, 184, 185,
	 2, 183, 185,
	 186, 187, 188,
	 26, 186, 188,
	 189, 190, 191,
	 49, 189, 191,
	 192, 193, 194,
	 35, 192, 194,
	 195, 196, 197,
	 15, 195, 197,
	 198, 199, 200,
	 47, 198, 200,
	 201, 202, 203,
	 7, 201, 203,
	 204, 205, 206,
	 27, 204, 206,
	 207, 208, 209,
	 23, 207, 209,
	 210, 211, 212,
	 6, 210, 212,
	 213, 214, 215,
	 40, 213, 215,
	 170, 144, 55,
	 29, 170, 55,
	 71, 63, 152,
	 162, 71, 152,
	 149, 153, 13,
	 3, 149, 13,
	 63, 11, 161,
	 150, 63, 161,
	 158, 171, 22,
	 37, 158, 22,
	 11, 10, 179,
	 159, 11, 179,
	 176, 165, 57,
	 41, 176, 57,
	 10, 71, 164,
	 177, 10, 164,
	 206, 168, 29,
	 27, 206, 29,
	 47, 57, 167,
	 198, 47, 167,
	 173, 207, 23,
	 22, 173, 23,
	 41, 40, 215,
	 174, 41, 215,
	 212, 201, 7,
	 6, 212, 7,
	 40, 47, 200,
	 213, 40, 200,
	 188, 204, 27,
	 26, 188, 27,
	 65, 7, 203,
	 180, 65, 203,
	 209, 189, 49,
	 23, 209, 49,
	 6, 15, 197,
	 210, 6, 197,
	 194, 183, 2,
	 35, 194, 2,
	 15, 65, 182,
	 195, 15, 182,
	 146, 186, 26,
	 55, 146, 26,
	 3, 2, 185,
	 147, 3, 185,
	 191, 156, 37,
	 49, 191, 37,
	 35, 13, 155,
	 192, 35, 155,
	 54, 28, 29,
	 55, 54, 29,
	 216, 217, 218,
	 219, 216, 218,
	 220, 221, 222,
	 223, 220, 222,
	 224, 225, 226,
	 227, 224, 226,
	 228, 229, 230,
	 231, 228, 230,
	 232, 233, 234,
	 235, 232, 234,
	 236, 237, 238,
	 239, 236, 238,
};
#define _Cube_Default_indices_
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
#ifndef _Cube_Default_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Cube_Default_materials[2] =
{
	{
		{{ 0.121858f, 0.121858f, 0.121858f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Main",
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
		{{ 0.048574f, 0.048574f, 0.048574f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Main_Dark",
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
#define _Cube_Default_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Cube_Default_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Cube_Default_batches[2][2] =
{
	{ 576, 0 },
	{ 36, 576 },
};
#define _Cube_Default_batches_
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
#ifndef _Cube_Default_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Cube_Default_meshes[2] =
{
	{
		"default",
		576,
		0,
		0,
	},
	{
		"default",
		36,
		576,
		1,
	},
};
#define _Cube_Default_meshes_
#endif
