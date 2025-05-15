cmake_minimum_required(VERSION 3.10)
project(Display)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(Display
    app/main.cpp
    src/display.cpp
)   

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(DisplayTest
    unittests/display_test.cpp
    src/display.cpp
)

target_link_libraries(DisplayTest
    gtest
    gmock
    gtest_main)   
