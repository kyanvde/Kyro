#pragma once

#include "Core.h"

namespace Kyro {

  class KYRO_API Application {
  public:
    Application();
    virtual ~Application();

    void run();
  };

  // To be defined in CLIENT
  Application* CreateApplication();
}
