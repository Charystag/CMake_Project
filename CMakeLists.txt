cmake_minimum_required(VERSION 3.15)

project(final)

enable_testing()

set(SRC_DIR src)
set(INC_DIR include)
set(TEST_DIR tests)

include_directories(${INC_DIR})

add_subdirectory(${SRC_DIR})
add_subdirectory(${TEST_DIR})
