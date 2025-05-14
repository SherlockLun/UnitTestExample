# UnitTestExample

# Build & Run

mkdir build
cd build
cmake ..
make

./app

# Install GTest on Debian
sudo apt install libgtest-dev
cd /usr/src/gtest/
sudo cmake . -DCMAKE_POLICY_VERSION_MINIMUM=3.5
sudo make


./UnitTests 
Running main() from ./googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from CalcTest
[ RUN      ] CalcTest.AddTest
[       OK ] CalcTest.AddTest (0 ms)
[----------] 1 test from CalcTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.