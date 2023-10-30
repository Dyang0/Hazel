#pragma once

#include "Core.h"

namespace Hazel {

	//class __declspec(dllexport) Application //Hazel -> Application
	class HAZEL_API Application //Hazel -> Application
	{
	public:
		Application();
		virtual ~Application(); //make destructive virtual bc this class will 
								//actually be subclassed by sandbox application

	void Run();
	};
	//to be defined in client
	Application* CreateApplication();
}