cmake_minimum_required(VERSION 3.22)

project(GameEngineSDK LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify the include directories (for headers)
include_directories(src)

# Add source files and create the executable
add_executable(GameEngineSDK 
    src/GameObject.cpp 
    src/GameAPI.cpp 
    tests/test_game_object.cpp
)

# Link Google Test
find_package(GTest REQUIRED)
target_link_libraries(GameEngineSDK GTest::GTest GTest::Main pthread)

include_directories(${PROJECT_SOURCE_DIR}/src)
