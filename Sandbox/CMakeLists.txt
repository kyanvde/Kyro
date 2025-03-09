add_executable(Sandbox
        src/SandboxApp.cpp
)

target_link_libraries(Sandbox PRIVATE Kyro)

# Add the directory containing Kyro.h to the include path
target_include_directories(Sandbox PRIVATE ${CMAKE_SOURCE_DIR}/Sandbox/include)