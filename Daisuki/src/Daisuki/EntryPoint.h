#pragma once

#ifdef DS_PLATFORM_WINDOWS

extern Daisuki::Application* Daisuki::CreateApplication();

int main(int argc, char** argv)
{
	printf("Entry point penetrated\n");
	auto app = Daisuki::CreateApplication();
	app->Run();
	delete app;
}

#endif