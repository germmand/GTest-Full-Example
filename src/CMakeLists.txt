file(GLOB SOURCES
    main.cpp
    operations/*.cpp
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(exec ${SOURCES})
