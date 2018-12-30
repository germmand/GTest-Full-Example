file(GLOB TEST_SOURCES 
    *.cpp 
    ${CMAKE_SOURCE_DIR}/src/operations/*.cpp)
include_directories(${CMAKE_SOURCE_DIR}/src)
add_executable(test_main ${TEST_SOURCES})
target_link_libraries(test_main gtest_main)
add_test(NAME cmake_test_main COMMAND test_main)
