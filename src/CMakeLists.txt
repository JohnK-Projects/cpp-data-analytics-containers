set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

set(TARGET_NAME main)    
set(LIB_NAME mylib)     


add_library(${LIB_NAME}
  SHARED
    containers.h
    containers.cpp
  )

target_include_directories(${LIB_NAME} PUBLIC ../externals/csvstream/)

add_executable(${TARGET_NAME} main.cpp)
target_link_libraries(${TARGET_NAME} ${LIB_NAME}) 

target_include_directories(${TARGET_NAME} PUBLIC ../externals/csvstream/)
