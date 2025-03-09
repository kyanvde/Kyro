#pragma once

extern Kyro::Application* Kyro::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Kyro::CreateApplication();
    app->run();
    delete app;
}