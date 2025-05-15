cmake_minimum_required(VERSION 3.10)
project(UnitTestExample)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_library(CalcLib src/Calc.cpp
                    src/Logger.cpp)
target_include_directories(CalcLib PUBLIC ${CMAKE_SOURCE_DIR}/inc)

add_executable(app  app/main.cpp)
target_link_libraries(app PRIVATE CalcLib)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Google Test
add_executable(UnitTests    unittests/TestCalc.cpp)
target_link_libraries(UnitTests PRIVATE CalcLib gtest gmock gtest_main)
target_include_directories(UnitTests PRIVATE ${CMAKE_SOURCE_DIR}/inc)

# Activate Tests
enable_testing()
add_test(NAME UnitTests COMMAND UnitTests)