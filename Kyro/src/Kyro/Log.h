#pragma once

#include "Core.h"
#include <spdlog/spdlog.h>

namespace Kyro {

    class KYRO_API Log {
        static std::shared_ptr<spdlog::logger> engineLogger;
        static std::shared_ptr<spdlog::logger> clientLogger;
    public:
        static void init();

        static std::shared_ptr<spdlog::logger>& getEngineLogger();
        static std::shared_ptr<spdlog::logger>& getClientLogger();
    };

    // Core log macros
    #define KO_ENGINE_TRACE(...)    ::Hazel::Log::getEngineLogger()->trace(__VA_ARGS__)
    #define KO_ENGINE_INFO(...)     ::Hazel::Log::getEngineLogger()->info(__VA_ARGS__)
    #define KO_ENGINE_WARN(...)     ::Hazel::Log::getEngineLogger()->warn(__VA_ARGS__)
    #define KO_ENGINE_ERROR(...)    ::Hazel::Log::getEngineLogger()->error(__VA_ARGS__)
    #define KO_ENGINE_CRITICAL(...) ::Hazel::Log::getEngineLogger()->critical(__VA_ARGS__)

    // Client log macros
    #define KO_TRACE(...)         ::Hazel::Log::getClientLogger()->trace(__VA_ARGS__)
    #define KO_INFO(...)          ::Hazel::Log::getClientLogger()->info(__VA_ARGS__)
    #define KO_WARN(...)          ::Hazel::Log::getClientLogger()->warn(__VA_ARGS__)
    #define KO_ERROR(...)         ::Hazel::Log::getClientLogger()->error(__VA_ARGS__)
    #define KO_CRITICAL(...)      ::Hazel::Log::getClientLogger()->critical(__VA_ARGS__)
}

