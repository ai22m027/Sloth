#include "stpch.h"
#include "Application.h"
#include "Sloth/Events/ApplicationEvent.h"
#include "Sloth/Log.h"

namespace Sloth {

	Application::Application() 
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {

	}

	void Application::Run() {
		while (true)
		{
			while (m_Running)
			{
				m_Window->OnUpdate();
			}
		}
	}
}
