#pragma once

extern Kyro::Application* Kyro::CreateApplication();

int main(int argc, char** argv)
{
    Kyro::Log::init();
    Kyro::Log::getEngineLogger()->warn("Initialized log!");
    Kyro::Log::getClientLogger()->info("Hello from Sandbox!");

    auto app = Kyro::CreateApplication();
    app->run();
    delete app;
}