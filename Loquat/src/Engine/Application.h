#pragma once
#include "Core.h"


namespace Engine {


	class ENG_API Application
	{
	public:
		Application();
		//virtual because it will be sub of game application
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}

