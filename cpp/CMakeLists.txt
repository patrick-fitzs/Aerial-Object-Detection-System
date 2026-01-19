cmake_minimum_required(VERSION 3.16)

set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

project(RadarDetection VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.3
)

FetchContent_MakeAvailable(nlohmann_json)


add_executable(radar_simulator
    src/main.cpp
    src/radar_simulator.cpp
)

target_include_directories(radar_simulator PRIVATE
        include
)

target_link_libraries(radar_simulator
    nlohmann_json::nlohmann_json
)
