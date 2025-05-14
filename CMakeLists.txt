cmake_minimum_required(VERSION 3.10)
project(UnitTestExample)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(app app/main.cpp src/calc.cpp)

# Google Test
add_executable(UnitTests    tests/test_calc.cpp
                            tests/test_calc_advanced.cpp
                            src/calc.cpp)

find_package(GTest REQUIRED)
target_link_libraries(UnitTests GTest::GTest GTest::Main pthread)

enable_testing()
add_test(NAME UnitTests COMMAND UnitTests)