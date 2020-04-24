#include <Daisuki.h>

class Sandbox : public Daisuki::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};


Daisuki::Application* Daisuki::CreateApplication()
{
	return new Sandbox();
}