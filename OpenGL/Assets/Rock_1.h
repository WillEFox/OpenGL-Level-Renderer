// "Rock_1.h" generated by "Obj2Header.exe" [Version 1.9d] Author: L.Norri Fullsail University.
// Data is converted to left-handed coordinate system and UV data is V flipped for Direct3D/Vulkan.
// The companion file "Rock_1.h2b" is a binary dump of this format(-padding) for more flexibility.
// Loading *.h2b: read version, sizes, handle strings(max len 260) by reading until null-terminated.
/***********************/
/*  Generator version  */
/***********************/
#ifndef _Rock_1_version_
const char Rock_1_version[4] = { '0','1','9','d' };
#define _Rock_1_version_
#endif
/************************************************/
/*  This section contains the model's size data */
/************************************************/
#ifndef _Rock_1_vertexcount_
const unsigned Rock_1_vertexcount = 136;
#define _Rock_1_vertexcount_
#endif
#ifndef _Rock_1_indexcount_
const unsigned Rock_1_indexcount = 480;
#define _Rock_1_indexcount_
#endif
#ifndef _Rock_1_materialcount_
const unsigned Rock_1_materialcount = 1; // can be used for batched draws
#define _Rock_1_materialcount_
#endif
#ifndef _Rock_1_meshcount_
const unsigned Rock_1_meshcount = 1;
#define _Rock_1_meshcount_
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
#ifndef _Rock_1_vertices_
// Raw Vertex Data follows: Positions, Texture Coordinates and Normals.
const OBJ_VERT Rock_1_vertices[136] =
{
	{	{ 0.270004f, 0.125838f, 0.699393f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.126900f, 0.049000f, 0.990700f }	},
	{	{ 0.739051f, 0.124112f, 0.622801f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.161300f, 0.050500f, 0.985600f }	},
	{	{ 0.643559f, 0.307344f, 0.586321f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.201100f, 0.280600f, 0.938500f }	},
	{	{ 0.277580f, 0.421498f, 0.635643f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.176000f, 0.294400f, 0.939300f }	},
	{	{ 0.603477f, 0.415992f, 0.544548f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.269000f, 0.420200f, 0.866700f }	},
	{	{ 0.456086f, 0.762369f, 0.388756f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.298400f, 0.490400f, 0.818800f }	},
	{	{ 0.250581f, 0.765679f, 0.463691f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.263900f, 0.480700f, 0.836200f }	},
	{	{ 0.275048f, 0.522247f, 0.598543f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.236000f, 0.426300f, 0.873300f }	},
	{	{ -0.706565f, 0.537069f, 0.598905f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.894900f, 0.444200f, -0.042300f }	},
	{	{ -0.421827f, 0.870781f, 0.507836f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.644800f, 0.763800f, -0.029700f }	},
	{	{ -0.511767f, 0.774033f, -0.412207f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.635500f, 0.731600f, -0.246700f }	},
	{	{ -0.646791f, 0.534222f, -0.522181f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.898400f, 0.437000f, -0.043500f }	},
	{	{ -0.795874f, 0.127307f, 0.635406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.994300f, 0.006400f, -0.106700f }	},
	{	{ -0.751593f, 0.441720f, 0.608671f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.984200f, 0.154400f, -0.086700f }	},
	{	{ -0.668011f, 0.431881f, -0.537252f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.982300f, 0.166900f, -0.084900f }	},
	{	{ -0.641301f, -0.033773f, -0.447347f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.994300f, 0.006400f, -0.106700f }	},
	{	{ 0.731536f, 0.019823f, 0.621448f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.134100f, -0.234200f, 0.962900f }	},
	{	{ 0.265502f, 0.022926f, 0.684101f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.097300f, -0.293800f, 0.950900f }	},
	{	{ 0.256981f, -0.132994f, 0.602585f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.081400f, -0.686600f, 0.722500f }	},
	{	{ 0.678343f, -0.058160f, 0.591905f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.310600f, -0.646100f, 0.697200f }	},
	{	{ 0.647433f, 0.134001f, -0.603786f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.356800f, 0.081500f, -0.930600f }	},
	{	{ 0.288016f, 0.133349f, -0.743537f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.233500f, 0.094200f, -0.967800f }	},
	{	{ 0.257621f, 0.424823f, -0.672492f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.234200f, 0.301100f, -0.924400f }	},
	{	{ 0.555150f, 0.369721f, -0.580933f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.547500f, 0.341200f, -0.764100f }	},
	{	{ 0.585848f, 0.456163f, -0.474705f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.847400f, 0.434200f, -0.305600f }	},
	{	{ 0.483019f, 0.718204f, -0.357596f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.766500f, 0.603700f, -0.219100f }	},
	{	{ 0.513650f, 0.754579f, 0.301983f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.923900f, 0.377900f, -0.059300f }	},
	{	{ 0.667960f, 0.395205f, 0.465017f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.918800f, 0.390500f, -0.057700f }	},
	{	{ 0.806656f, 0.123495f, 0.542780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.980900f, 0.177000f, -0.080200f }	},
	{	{ 0.712149f, 0.134267f, -0.519659f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.976700f, 0.199500f, -0.079200f }	},
	{	{ 0.622961f, 0.360976f, -0.500628f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.913300f, 0.402400f, -0.062500f }	},
	{	{ 0.714747f, 0.298185f, 0.498984f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.912900f, 0.403200f, -0.063600f }	},
	{	{ 0.398566f, 0.784907f, -0.357973f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.068400f, 0.997200f, -0.031000f }	},
	{	{ 0.266920f, 0.800214f, -0.418630f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.177600f, 0.943900f, -0.278400f }	},
	{	{ 0.249916f, 0.817664f, 0.368562f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.144700f, 0.961000f, 0.235800f }	},
	{	{ 0.429897f, 0.811422f, 0.301937f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.337000f, 0.930000f, 0.146600f }	},
	{	{ -0.740618f, 0.044141f, 0.646710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.254900f, -0.795000f, 0.550500f }	},
	{	{ -0.566265f, -0.107041f, -0.441836f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.180400f, -0.982000f, 0.056500f }	},
	{	{ 0.148790f, -0.191247f, -0.604997f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.084600f, -0.996000f, 0.027900f }	},
	{	{ 0.150240f, -0.183303f, 0.519762f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.083000f, -0.956500f, 0.279800f }	},
	{	{ -0.600838f, 0.399747f, -0.612106f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.370800f, 0.057700f, -0.926900f }	},
	{	{ 0.185978f, 0.051759f, -0.750445f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.070700f, -0.144500f, -0.987000f }	},
	{	{ 0.157848f, -0.127767f, -0.694199f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.119300f, -0.262700f, -0.957500f }	},
	{	{ -0.569540f, -0.050501f, -0.523206f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.253800f, -0.218400f, -0.942300f }	},
	{	{ 0.712227f, 0.026876f, -0.513724f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.907600f, -0.234200f, -0.348400f }	},
	{	{ 0.802531f, 0.023203f, 0.542037f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.971400f, -0.222800f, -0.082000f }	},
	{	{ 0.749988f, -0.061079f, 0.517963f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.778200f, -0.625200f, -0.059300f }	},
	{	{ 0.678192f, -0.056079f, -0.496947f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.748300f, -0.606000f, -0.269900f }	},
	{	{ 0.165853f, 0.125240f, 0.707238f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.052600f, 0.003300f, 0.998600f }	},
	{	{ 0.174678f, 0.439950f, 0.646174f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.087700f, 0.236900f, 0.967600f }	},
	{	{ -0.676189f, 0.443636f, 0.683494f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.036500f, 0.179100f, 0.983200f }	},
	{	{ -0.730200f, 0.126150f, 0.713654f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.021300f, 0.081400f, 0.996500f }	},
	{	{ 0.287108f, 0.029929f, -0.739495f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.215100f, -0.187200f, -0.958500f }	},
	{	{ 0.649753f, 0.029400f, -0.597266f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.603300f, -0.206500f, -0.770300f }	},
	{	{ 0.615575f, -0.058079f, -0.578722f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.495500f, -0.552700f, -0.670000f }	},
	{	{ 0.263323f, -0.126410f, -0.689201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.177100f, -0.321500f, -0.930200f }	},
	{	{ 0.253622f, -0.188066f, 0.511278f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.085200f, -0.996400f, -0.000900f }	},
	{	{ 0.253395f, -0.186797f, -0.604426f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.078200f, -0.996900f, -0.000600f }	},
	{	{ 0.599563f, -0.121272f, -0.498077f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.407500f, -0.881500f, -0.238400f }	},
	{	{ 0.660907f, -0.119674f, 0.511281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.407300f, -0.913000f, -0.024300f }	},
	{	{ 0.171238f, 0.537086f, 0.610673f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.141300f, 0.350900f, 0.925700f }	},
	{	{ 0.150341f, 0.771040f, 0.494777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.169200f, 0.395200f, 0.902900f }	},
	{	{ -0.343872f, 0.850196f, 0.565729f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.114400f, 0.323100f, 0.939400f }	},
	{	{ -0.609453f, 0.546495f, 0.664539f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.073000f, 0.268400f, 0.960500f }	},
	{	{ 0.152839f, 0.434809f, -0.683614f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.030100f, 0.299400f, -0.953700f }	},
	{	{ 0.181557f, 0.166514f, -0.750977f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.009400f, 0.116100f, -0.993200f }	},
	{	{ -0.422982f, 0.434809f, -0.642090f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.161800f, 0.186100f, -0.969100f }	},
	{	{ -0.573266f, 0.532812f, -0.595812f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.394600f, 0.390600f, -0.831700f }	},
	{	{ -0.449197f, 0.768304f, -0.488370f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.058000f, 0.450100f, -0.891100f }	},
	{	{ 0.161455f, 0.754589f, -0.531645f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.056000f, 0.457000f, -0.887700f }	},
	{	{ 0.150052f, 0.532150f, -0.646659f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.041000f, 0.405300f, -0.913300f }	},
	{	{ -0.423787f, 0.827873f, -0.403895f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.083200f, 0.994800f, -0.059200f }	},
	{	{ -0.324474f, 0.905109f, 0.489637f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.083200f, 0.994800f, -0.059200f }	},
	{	{ 0.145949f, 0.827865f, 0.396300f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.085900f, 0.995400f, -0.043000f }	},
	{	{ 0.163899f, 0.808709f, -0.443501f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.088700f, 0.944700f, -0.315700f }	},
	{	{ 0.253623f, 0.523043f, -0.635582f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.246500f, 0.407500f, -0.879300f }	},
	{	{ 0.262943f, 0.746272f, -0.512912f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.260300f, 0.665100f, -0.699900f }	},
	{	{ 0.423229f, 0.726963f, -0.445585f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.505700f, 0.641500f, -0.576800f }	},
	{	{ 0.520262f, 0.472487f, -0.553046f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.553500f, 0.436900f, -0.709100f }	},
	{	{ -0.730200f, 0.126150f, 0.713654f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.282000f, -0.584900f, 0.760500f }	},
	{	{ -0.795874f, 0.127307f, 0.635406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.282000f, -0.584900f, 0.760500f }	},
	{	{ -0.427638f, 0.023353f, 0.692022f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.082700f, -0.549800f, 0.831200f }	},
	{	{ 0.749988f, -0.061079f, 0.517963f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.551300f, -0.644700f, 0.529500f }	},
	{	{ 0.660907f, -0.119674f, 0.511281f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.263700f, -0.809600f, 0.524400f }	},
	{	{ 0.456086f, 0.762369f, 0.388756f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.501900f, 0.749700f, 0.431300f }	},
	{	{ 0.513650f, 0.754579f, 0.301983f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.654300f, 0.723300f, 0.220700f }	},
	{	{ -0.569540f, -0.050501f, -0.523206f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.382800f, -0.759100f, -0.526500f }	},
	{	{ -0.566265f, -0.107041f, -0.441836f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.555300f, -0.749600f, -0.360100f }	},
	{	{ -0.641301f, -0.033773f, -0.447347f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.727400f, -0.663100f, -0.176700f }	},
	{	{ 0.253622f, -0.188066f, 0.511278f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.075200f, -0.844200f, 0.530800f }	},
	{	{ 0.153049f, -0.129231f, 0.609350f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.027100f, -0.696400f, 0.717100f }	},
	{	{ 0.253395f, -0.186797f, -0.604426f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.175800f, -0.808100f, -0.562300f }	},
	{	{ 0.148790f, -0.191247f, -0.604997f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.103900f, -0.810900f, -0.575900f }	},
	{	{ 0.157848f, -0.127767f, -0.694199f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.080700f, -0.812900f, -0.576900f }	},
	{	{ 0.263323f, -0.126410f, -0.689201f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.179800f, -0.807600f, -0.561700f }	},
	{	{ -0.421827f, 0.870781f, 0.507836f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.358400f, 0.677700f, 0.642100f }	},
	{	{ -0.343872f, 0.850196f, 0.565729f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.140000f, 0.771600f, 0.620500f }	},
	{	{ -0.324474f, 0.905109f, 0.489637f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.077000f, 0.830700f, 0.551300f }	},
	{	{ 0.712149f, 0.134267f, -0.519659f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.783800f, 0.148500f, -0.603000f }	},
	{	{ 0.647433f, 0.134001f, -0.603786f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.780000f, 0.173100f, -0.601300f }	},
	{	{ 0.145949f, 0.827865f, 0.396300f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.212400f, 0.836000f, 0.506000f }	},
	{	{ 0.150341f, 0.771040f, 0.494777f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.213800f, 0.833200f, 0.510000f }	},
	{	{ 0.250581f, 0.765679f, 0.463691f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.196700f, 0.861900f, 0.467300f }	},
	{	{ 0.161726f, 0.023353f, 0.692022f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.033400f, -0.320600f, 0.946600f }	},
	{	{ 0.806656f, 0.123495f, 0.542780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.754200f, -0.049600f, 0.654800f }	},
	{	{ 0.739051f, 0.124112f, 0.622801f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.754200f, -0.049600f, 0.654800f }	},
	{	{ 0.731536f, 0.019823f, 0.621448f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.754200f, -0.049600f, 0.654800f }	},
	{	{ 0.802531f, 0.023203f, 0.542037f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.754200f, -0.049600f, 0.654800f }	},
	{	{ 0.714747f, 0.298185f, 0.498984f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.702200f, 0.484200f, 0.521900f }	},
	{	{ 0.667960f, 0.395205f, 0.465017f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.724500f, 0.499600f, 0.474900f }	},
	{	{ 0.603477f, 0.415992f, 0.544548f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.725500f, 0.501900f, 0.470900f }	},
	{	{ 0.643559f, 0.307344f, 0.586321f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.704800f, 0.484600f, 0.518000f }	},
	{	{ 0.622961f, 0.360976f, -0.500628f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.735200f, 0.374400f, -0.565000f }	},
	{	{ -0.668011f, 0.431881f, -0.537252f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.462800f, 0.205500f, -0.862300f }	},
	{	{ -0.646791f, 0.534222f, -0.522181f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.541500f, 0.400100f, -0.739400f }	},
	{	{ -0.706565f, 0.537069f, 0.598905f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.538200f, 0.487800f, 0.687400f }	},
	{	{ -0.751593f, 0.441720f, 0.608671f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.670200f, 0.290900f, 0.682800f }	},
	{	{ -0.676189f, 0.443636f, 0.683494f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.655200f, 0.318800f, 0.684800f }	},
	{	{ -0.609453f, 0.546495f, 0.664539f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.496500f, 0.532300f, 0.685600f }	},
	{	{ 0.398566f, 0.784907f, -0.357973f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.498400f, 0.817600f, -0.288300f }	},
	{	{ -0.449197f, 0.768304f, -0.488370f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.370300f, 0.752600f, -0.544600f }	},
	{	{ -0.423787f, 0.827873f, -0.403895f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.287600f, 0.896600f, -0.336700f }	},
	{	{ 0.161455f, 0.754589f, -0.531645f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.078700f, 0.844100f, -0.530400f }	},
	{	{ -0.600838f, 0.399747f, -0.612106f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.751500f, -0.171900f, -0.637000f }	},
	{	{ -0.569540f, -0.050501f, -0.523206f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.751500f, -0.171900f, -0.637000f }	},
	{	{ -0.641301f, -0.033773f, -0.447347f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.751500f, -0.171900f, -0.637000f }	},
	{	{ -0.668011f, 0.431881f, -0.537252f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.751500f, -0.171900f, -0.637000f }	},
	{	{ -0.795874f, 0.127307f, 0.635406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.766900f, -0.641300f, -0.023900f }	},
	{	{ -0.740618f, 0.044141f, 0.646710f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.766900f, -0.641300f, -0.023900f }	},
	{	{ 0.802531f, 0.023203f, 0.542037f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.600000f, -0.574800f, 0.556400f }	},
	{	{ 0.731536f, 0.019823f, 0.621448f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.600000f, -0.574800f, 0.556400f }	},
	{	{ -0.730200f, 0.126150f, 0.713654f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.724700f, 0.172800f, 0.667100f }	},
	{	{ -0.795874f, 0.127307f, 0.635406f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.724700f, 0.172800f, 0.667100f }	},
	{	{ -0.324474f, 0.905109f, 0.489637f },	{ 0.000000f, 0.000000f, 0.000000f },	{ -0.431000f, 0.901400f, -0.041500f }	},
	{	{ 0.739051f, 0.124112f, 0.622801f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.688100f, 0.481900f, 0.542500f }	},
	{	{ 0.806656f, 0.123495f, 0.542780f },	{ 0.000000f, 0.000000f, 0.000000f },	{ 0.688100f, 0.481900f, 0.542500f }	},
};
#define _Rock_1_vertices_
#endif
#ifndef _Rock_1_indices_
// Index Data follows: Sequential by mesh, Every Three Indices == One Triangle.
const unsigned int Rock_1_indices[480] =
{
	 0, 1, 2,
	 3, 0, 2,
	 4, 5, 6,
	 7, 4, 6,
	 8, 9, 10,
	 11, 8, 10,
	 12, 13, 14,
	 15, 12, 14,
	 16, 17, 18,
	 19, 16, 18,
	 20, 21, 22,
	 23, 20, 22,
	 24, 25, 26,
	 27, 24, 26,
	 28, 29, 30,
	 31, 28, 30,
	 32, 33, 34,
	 35, 32, 34,
	 36, 37, 38,
	 39, 36, 38,
	 40, 41, 42,
	 43, 40, 42,
	 44, 45, 46,
	 47, 44, 46,
	 48, 49, 50,
	 51, 48, 50,
	 52, 53, 54,
	 55, 52, 54,
	 56, 57, 58,
	 59, 56, 58,
	 60, 61, 62,
	 63, 60, 62,
	 64, 65, 66,
	 67, 68, 69,
	 70, 67, 69,
	 71, 72, 73,
	 74, 71, 73,
	 75, 76, 77,
	 78, 75, 77,
	 79, 80, 36,
	 81, 79, 36,
	 82, 19, 83,
	 35, 84, 85,
	 86, 87, 88,
	 47, 58, 54,
	 39, 89, 18,
	 90, 39, 18,
	 91, 92, 93,
	 94, 91, 93,
	 95, 96, 97,
	 65, 21, 52,
	 41, 65, 52,
	 98, 44, 53,
	 99, 98, 53,
	 100, 101, 102,
	 34, 100, 102,
	 0, 48, 103,
	 17, 0, 103,
	 104, 105, 106,
	 107, 104, 106,
	 108, 109, 110,
	 111, 108, 110,
	 24, 112, 23,
	 78, 24, 23,
	 113, 114, 67,
	 40, 113, 67,
	 66, 40, 67,
	 22, 64, 70,
	 75, 22, 70,
	 115, 116, 117,
	 118, 115, 117,
	 3, 7, 60,
	 49, 3, 60,
	 77, 119, 25,
	 120, 10, 121,
	 33, 76, 122,
	 74, 33, 122,
	 90, 81, 36,
	 39, 90, 36,
	 47, 46, 59,
	 58, 47, 59,
	 94, 54, 58,
	 91, 94, 58,
	 123, 124, 125,
	 126, 123, 125,
	 127, 88, 87,
	 128, 127, 87,
	 19, 18, 89,
	 83, 19, 89,
	 86, 93, 92,
	 87, 86, 92,
	 57, 56, 39,
	 38, 57, 39,
	 42, 41, 52,
	 55, 42, 52,
	 82, 129, 130,
	 19, 82, 130,
	 118, 96, 95,
	 115, 118, 95,
	 21, 20, 53,
	 52, 21, 53,
	 74, 73, 34,
	 33, 74, 34,
	 96, 101, 100,
	 97, 96, 100,
	 1, 0, 17,
	 16, 1, 17,
	 49, 48, 0,
	 3, 49, 0,
	 18, 17, 103,
	 90, 18, 103,
	 25, 24, 78,
	 77, 25, 78,
	 120, 67, 114,
	 10, 120, 114,
	 76, 75, 70,
	 69, 76, 70,
	 131, 117, 116,
	 132, 131, 116,
	 61, 60, 7,
	 6, 61, 7,
	 48, 51, 81,
	 103, 48, 81,
	 4, 7, 3,
	 2, 4, 3,
	 31, 30, 24,
	 27, 31, 24,
	 64, 66, 67,
	 70, 64, 67,
	 14, 13, 8,
	 11, 14, 8,
	 23, 22, 75,
	 78, 23, 75,
	 44, 47, 54,
	 53, 44, 54,
	 22, 21, 65,
	 64, 22, 65,
	 99, 23, 112,
	 98, 99, 112,
	 85, 25, 119,
	 35, 85, 119,
	 133, 121, 10,
	 9, 133, 10,
	 84, 110, 109,
	 85, 84, 109,
	 77, 76, 33,
	 119, 77, 33,
	 122, 120, 121,
	 74, 122, 121,
	 111, 134, 135,
	 108, 111, 135,
	 29, 28, 45,
	 44, 29, 45,
	 35, 34, 102,
	 84, 35, 102,
	 50, 49, 60,
	 63, 50, 60,
	 66, 65, 41,
	 40, 66, 41,
	 90, 103, 81,
};
#define _Rock_1_indices_
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
#ifndef _Rock_1_materials_
// Material Data follows: pulled from a .mtl file of the same name if present.
const OBJ_MATERIAL Rock_1_materials[1] =
{
	{
		{{ 0.195369f, 0.206610f, 0.242556f },
		1.000000f,
		{ 0.500000f, 0.500000f, 0.500000f },
		96.078430f,
		{ 1.000000f, 1.000000f, 1.000000f },
		60.000000f,
		{ 1.000000f, 1.000000f, 1.000000f },
		1.000000f,
		{ 0.000000f, 0.000000f, 0.000000f },
		2},
		"Rock_Grey",
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
#define _Rock_1_materials_
#endif
/************************************************/
/*  This section contains the model's structure */
/************************************************/
#ifndef _Rock_1_batches_
// Use this conveinence array to batch render all geometry by like material.
// Each entry corresponds to the same entry in the materials array above.
// The two numbers provided are the IndexCount and the IndexOffset into the indices array.
// If you need more fine grained control(ex: for transformations) use the OBJ_MESH data below.
const unsigned int Rock_1_batches[1][2] =
{
	{ 480, 0 },
};
#define _Rock_1_batches_
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
#ifndef _Rock_1_meshes_
// Mesh Data follows: Meshes are .obj groups sorted & split by material.
// Meshes are provided in sequential order, sorted by material first and name second.
const OBJ_MESH Rock_1_meshes[1] =
{
	{
		"default",
		480,
		0,
		0,
	},
};
#define _Rock_1_meshes_
#endif
