cmake_minimum_required(VERSION 3.21)

add_executable("untitled2" main.cpp  ${CMAKE_SOURCE_DIR}/include/disk.h  ${CMAKE_SOURCE_DIR}/include/gpu.h  ${CMAKE_SOURCE_DIR}/include/kbd.h ${CMAKE_SOURCE_DIR}/include/ram.h  ${CMAKE_SOURCE_DIR}/include/cpu.h disk.cpp gpu.cpp kbd.cpp ram.cpp cpu.cpp)
target_include_directories("untitled2" PUBLIC ${CMAKE_SOURCE_DIR}/include)