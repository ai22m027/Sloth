#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Sloth::Application* Sloth::CreateApplication();

int main(int argc, char** argv)
{
	printf("Sloth Engine!");
	auto app = Sloth::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Sloth only supports Windows!
#endif
