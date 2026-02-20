# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
# @date Nov 9, 2025
# @brief CMakeLists.txt simple example
#        This does not generate documentation
#        It doesn't build any library
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(ejercicio4_approximate_root                # Mandatory
    VERSION 1.0 
    DESCRIPTION "Este programa aproxima una raiz con un error de 1e-4"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)            # Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called to be built from the source files listed in the command invocation.
add_executable(approximate_root
    src/funciones.h
    src/funciones.cc
    src/approximate_root.cc)

# Add expected compiler features to a target.
target_compile_features(approximate_root PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(approximate_root PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

