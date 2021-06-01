#pragma once

#ifdef ENG_PLATFORM_WINDOWS
//external linkage
extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {
	printf("Loquat Engine\n");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#endif