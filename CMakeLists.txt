cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(target_prefix cg)

project(cpp-console-games)

add_subdirectory(projects/tic-tac-toe)
add_subdirectory(lib)

add_executable(cpp-console-games)
target_sources(${PROJECT_NAME} PRIVATE "src/main.cpp")

target_link_libraries(${PROJECT_NAME} PUBLIC
        ${target_prefix}::util
        )
