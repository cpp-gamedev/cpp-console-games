cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(tick-tac-toe)

add_executable(tick-tac-toe src/tic_tac_toe.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC
        ${target_prefix}::util
        )

target_include_directories(tick-tac-toe
        PUBLIC
        include

        PRIVATE
        src
        )

target_sources(tick-tac-toe
        PUBLIC
        include/tick-tac-toe/board.hpp
        include/tick-tac-toe/cell_state.hpp

        PRIVATE
        src/board.cpp



)

