cmake_minimum_required(VERSION 3.10)

project(DataAnalyticsCPP)

set(CMAKE_CXX_STANDARD 17)

set(TARGET_NAME main)
set(LIB_NAME mylib)

# Include directories
include_directories(include)

# Create shared library
add_library(${LIB_NAME}
    SHARED
    src/containers.cpp
)

# Create executable
add_executable(${TARGET_NAME}
    src/main.cpp
)

# Link library
target_link_libraries(${TARGET_NAME} ${LIB_NAME})

# CSV external library
target_include_directories(${LIB_NAME}
    PUBLIC externals/csvstream/
)

target_include_directories(${TARGET_NAME}
    PUBLIC externals/csvstream/
)