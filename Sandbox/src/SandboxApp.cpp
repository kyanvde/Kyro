#include <Kyro.h>

class Sandbox : public Kyro::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }

};

Kyro::Application* Kyro::CreateApplication()
{
    return new Sandbox();
}
