cmake_minimum_required(VERSION 3.16)
project(RadarDetection VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
        main.cpp
)

add_executable(Aerial-Object-Detection-System ${SOURCES}
        main.cpp
        # not sure we need more cpp files but pop them here if we do
)

target_include_directories(Aerial-Object-Detection-System PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

if(MSVC)
    target_compile_options(Aerial-Object-Detection-System PRIVATE /W4)
else()
    target_compile_options(Aerial-Object-Detection-System PRIVATE -Wall -Wextra -pedantic)
endif()
