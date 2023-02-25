#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Sloth::Application* Sloth::CreateApplication();

int main(int argc, char** argv)
{
	//printf("Sloth Engine!");

	Sloth::Log::Init();
	ST_CORE_WARN("Initialized Log!");
	ST_INFO("Hello!");
	ST_CORE_FATAL("Oh no!");
	ST_CORE_TRACE("Trace me!");
	int a = 5;
	ST_CORE_ERROR("Error this bitch! Var={0}", a);



	auto app = Sloth::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Sloth only supports Windows!
#endif
