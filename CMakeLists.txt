cmake_minimum_required(VERSION 3.30)

project(KyroEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add spdlog as a subdirectory
add_subdirectory(Kyro/vendor/spdlog)

# Include spdlog headers
include_directories(${CMAKE_SOURCE_DIR}/Kyro/vendor/spdlog/include)

add_subdirectory(Kyro)
add_subdirectory(Sandbox)
