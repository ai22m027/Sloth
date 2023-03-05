#include "Application.h"
#include "Sloth/Events/ApplicationEvent.h"
#include "Sloth/Log.h"

namespace Sloth {

	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		while (true)
		{
			WindowResizeEvent e(1280, 720);
			ST_TRACE(e);

			while (true);
		}
	}
}
