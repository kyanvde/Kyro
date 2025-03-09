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
    #define KO_ENGINE_TRACE(...)    ::Kyro::Log::getEngineLogger()->trace(__VA_ARGS__)
    #define KO_ENGINE_INFO(...)     ::Kyro::Log::getEngineLogger()->info(__VA_ARGS__)
    #define KO_ENGINE_WARN(...)     ::Kyro::Log::getEngineLogger()->warn(__VA_ARGS__)
    #define KO_ENGINE_ERROR(...)    ::Kyro::Log::getEngineLogger()->error(__VA_ARGS__)
    #define KO_ENGINE_CRITICAL(...) ::Kyro::Log::getEngineLogger()->critical(__VA_ARGS__)

    // Client log macros
    #define KO_TRACE(...)         ::Kyro::Log::getClientLogger()->trace(__VA_ARGS__)
    #define KO_INFO(...)          ::Kyro::Log::getClientLogger()->info(__VA_ARGS__)
    #define KO_WARN(...)          ::Kyro::Log::getClientLogger()->warn(__VA_ARGS__)
    #define KO_ERROR(...)         ::Kyro::Log::getClientLogger()->error(__VA_ARGS__)
    #define KO_CRITICAL(...)      ::Kyro::Log::getClientLogger()->critical(__VA_ARGS__)
}

