cmake_minimum_required(VERSION 2.8)

project(testas)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
SET(SOURCE_FILES
    src/main.cpp
    src/window.cpp
    src/vector.cpp
    src/shape.cpp
    src/circle.cpp
    )


add_executable(playground ${SOURCE_FILES})

include_directories( include )
target_link_libraries(playground sfml-graphics sfml-window sfml-system)
