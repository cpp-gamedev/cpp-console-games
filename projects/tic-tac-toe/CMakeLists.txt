cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(tic-tac-toe)

add_executable(tic-tac-toe src/tic_tac_toe.cpp)

target_link_libraries(tic-tac-toe PUBLIC
        ${target_prefix}::util
        )

target_include_directories(tic-tac-toe
        PUBLIC
        include

        PRIVATE
        src
        )

target_sources(tic-tac-toe
        PUBLIC
        include/tic-tac-toe/cell_state.hpp
        include/tic-tac-toe/board.hpp
        include/tic-tac-toe/console_output_display.hpp


        PRIVATE
        src/board.cpp
        src/console_output_display.cpp



)

