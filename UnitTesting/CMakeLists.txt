cmake_minimum_required(VERSION 3.10)
project(NodeTest)

set(CMAKE_CXX_STANDARD 11)

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add your source files
add_executable(test_node test_node.cpp)

# Link Google Test libraries
target_link_libraries(test_node ${GTEST_LIBRARIES} pthread)
