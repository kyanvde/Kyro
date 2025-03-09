#pragma once

extern Kyro::Application* Kyro::CreateApplication();

int main(int argc, char** argv)
{
    Kyro::Log::init();
    KO_ENGINE_WARN("Initialized log!");
    KO_INFO("Hello from Sandbox!");

    auto app = Kyro::CreateApplication();
    app->run();
    delete app;
}