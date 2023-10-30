#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) { //vs void main()? //winmain for windows bc we might what to retain information on how it was run
	//Hazel::Print();
	//printf("Hazel Engine");
	// 
	//Sandbox* sandbox = new Sandbox(); //should be handled by engine not application (should control lifetime, has a lot of memory)
	auto app = Hazel::CreateApplication();
	//sandbox->Run();
	app->Run();
	delete app;
} //Moved the entry point into being inside the engine

#endif