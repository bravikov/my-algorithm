cmake_minimum_required(VERSION 2.8)
add_executable(my_test test.cpp)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
target_link_libraries(my_test ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

