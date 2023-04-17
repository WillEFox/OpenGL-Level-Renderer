//// Simple basecode showing how to create a window and attatch a openglsurface
//#define GATEWARE_ENABLE_CORE // All libraries need this
//#define GATEWARE_ENABLE_SYSTEM // Graphics libs require system level libraries
//#define GATEWARE_ENABLE_GRAPHICS // Enables all Graphics Libraries
//#define GATEWARE_ENABLE_MATH
//#define GATEWARE_ENABLE_INPUT
//// Ignore some GRAPHICS libraries we aren't going to use
//#define GATEWARE_DISABLE_GDIRECTX11SURFACE // we have another template for this
//#define GATEWARE_DISABLE_GDIRECTX12SURFACE // we have another template for this
//#define GATEWARE_DISABLE_GVULKANSURFACE // we have another template for this
//#define GATEWARE_DISABLE_GRASTERSURFACE // we have another template for this
//// TODO: Part 2a
//// TODO: Part 4a
//// With what we want & what we don't defined we can include the API
//#include "../Gateware/Gateware.h"
#define STB_IMAGE_IMPLEMENTATION
#include <math.h>
#include "stb_image.h"
#include "renderer.h" // example rendering code (not Gateware code!)
// open some namespaces to compact the code a bit
using namespace GW;
using namespace CORE;
using namespace SYSTEM;
using namespace GRAPHICS;
using namespace H2B;
// lets pop a window and use OpenGL to clear to a green screen
int main()
{
	GWindow win;
	GEventResponder msgs;
	GOpenGLSurface ogl;
	if (+win.Create(0, 0, 800, 600, GWindowStyle::WINDOWEDBORDERED))
	{
		float clr[] = { 2 / 255.0f, 204 / 255.0f, 254 / 255.0f, 1 }; // TODO: Part 1a
		win.SetWindowName("Will Fox - Assignment 1 - OpenGL");
		msgs.Create([&](const GW::GEvent& e) {
			GW::SYSTEM::GWindow::Events q;
			if (+e.Read(q) && q == GWindow::Events::RESIZE)
				clr[2] += 0.01f; // move towards a cyan as they resize
			});
		win.Register(msgs);
		if (+ogl.Create(win, GW::GRAPHICS::DEPTH_BUFFER_SUPPORT))
		{
			Renderer renderer(win, ogl);
			while (+win.ProcessWindowEvents())
			{
				// TODO: Part 4b
				renderer.Update_Camera();
				glClearColor(clr[0], clr[1], clr[2], clr[3]);
				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
				renderer.Render();
				ogl.UniversalSwapBuffers();
			}
		}
	}
	return 0; // that's all folks
}