add_library(Kyro SHARED
        src/Kyro/Application.h
        src/Kyro/Application.cpp
        src/Kyro/Core.h
        src/Kyro/EntryPoint.h
        src/Kyro/Log.cpp
        src/Kyro/Log.h
)

# Include Kyro.h
target_include_directories(Kyro PUBLIC ${CMAKE_SOURCE_DIR}/Kyro/src/)

# Link spdlog to Kyro
target_link_libraries(Kyro PRIVATE spdlog)

# Define platform macros
if(WIN32)
  target_compile_definitions(Kyro PUBLIC KO_PLATFORM_WINDOWS)
elseif(UNIX)
  target_compile_definitions(Kyro PUBLIC KO_PLATFORM_LINUX)
endif()

target_compile_definitions(Kyro PRIVATE KO_BUILD_ENGINE)

# Create the include directory in Sandbox if it doesn't exist
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/Sandbox/include)

# Install Kyro.h to the Sandbox include directory
install(FILES ${CMAKE_SOURCE_DIR}/Kyro/src/Kyro.h
        DESTINATION ${CMAKE_SOURCE_DIR}/Sandbox/include
)