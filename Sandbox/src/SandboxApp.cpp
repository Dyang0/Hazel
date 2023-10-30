

//namespace Hazel {

	//__declspec(dllimport) void Print(); //imports instead of exporting

//} also need to include to sandbox. Do it next time
#include "Hazel.h" //C/C++ -> general -> Aditional Include Directories

class Sandbox : public Hazel::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}

//int main() { //vs void main()?
	//Hazel::Print();

	//Sandbox* sandbox = new Sandbox(); //should be handled by engine not application (should control lifetime, has a lot of memory)
	//sandbox->Run();
	//delete sandbox;

//}