#include "Application.hpp"

int main()
{
	Application* application = new Application(1280, 720, "account-management");
	application->Run();
	delete application;
}