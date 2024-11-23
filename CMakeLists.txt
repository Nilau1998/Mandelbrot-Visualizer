cmake_minimum_required(VERSION 3.28)

set(CMAKE_CUDA_ARCHITECTURES 50 61 72 89)
set(CMAKE_CUDA_COMPILER /usr/local/cuda/bin/nvcc)

project(mandelbrot VERSION 1.0.0 LANGUAGES CXX CUDA)
enable_language(CUDA)

include(${CMAKE_SOURCE_DIR}/files.cmake)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS "${PROJECT_SOURCE_DIR}/res")

find_package(Qt6 COMPONENTS Core Gui Widgets OpenGLWidgets REQUIRED)

add_executable(${PROJECT_NAME} ${CXX_SRCS})

target_include_directories(${PROJECT_NAME} PRIVATE inc)

target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Widgets Qt6::OpenGLWidgets)