project(${target_prefix}-util)

add_library(${PROJECT_NAME})
add_library(${target_prefix}::util ALIAS ${PROJECT_NAME})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        include

        PRIVATE
        src
        )

target_sources(${PROJECT_NAME} PRIVATE
        include/${target_prefix}/util/enum_array.hpp
        include/${target_prefix}/util/time.hpp

        src/time.cpp
        )