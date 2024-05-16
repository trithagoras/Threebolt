cmake_minimum_required(VERSION 3.21)

# Set the default toolchain to use a Vcpkg submodule.
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_TOOLCHAIN_FILE
        "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
        CACHE STRING "Vcpkg toolchain file")
endif()

set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

project(threebolt VERSION 0.0.1)

# deps
find_package(antlr4-runtime CONFIG REQUIRED)

# exe
add_executable(threebolt src/main.cpp)

# Include directories for ANTLR4 runtime
target_include_directories(threebolt PRIVATE ${ANTLR4_INCLUDE_DIR})

# linking
target_link_libraries(threebolt PRIVATE antlr4_static)
