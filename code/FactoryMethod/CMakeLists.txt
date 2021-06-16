cmake_minimum_required(VERSION 3.18)

# C++ standard requirements.
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(FactoryMethod LANGUAGES CXX)
file(GLOB HEADER_FILES *.h)

# find *.cpp 
aux_source_directory(${PROJECT_SOURCE_DIR} SOURCE_FILES)
# Add an executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

