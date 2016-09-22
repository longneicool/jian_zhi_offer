cmake_minimum_required(VERSION 2.8)

project(findValInArray)

SET(ROOT_DIR ../../)

FILE(GLOB_RECURSE SOURCE_FILES code/*.cpp testcase/*.cpp)
FILE(GLOB_RECURSE HEAD_FILES code/*.h testcase/*.h)

include_directories(
    gtest/
    code/
    )
add_executable(findValInArray ${SOURCE_FILES} ${HEAD_FILES})
target_link_libraries(findValInArray gtest)
target_link_libraries(findValInArray pthread)
add_test(NAME findValInArray COMMAND findValInArray)
