# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.25.3)

# Set the project name
project(
    my_first_cmake_thingy_lol
)

# Add an executable
add_executable(${PROJECT_NAME}
    main.c
    extern.c
)

# Set C11
target_compile_features(${PROJECT_NAME} PUBLIC c_std_11)


target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
)