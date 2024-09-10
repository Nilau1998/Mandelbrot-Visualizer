cmake_minimum_required(VERSION 3.12)
# CUDA
set(CMAKE_CUDA_ARCHITECTURES 50 61 72 89)
set(CMAKE_CUDA_COMPILER /usr/local/cuda/bin/nvcc)

project(mandelbrot VERSION 1.0.0 LANGUAGES CXX CUDA)
enable_language(CUDA)

include(${CMAKE_SOURCE_DIR}/files.cmake)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

set(CMAKE_AUTORCC ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} ${CXX_SRCS} ${CXX_INCS})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)