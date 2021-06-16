cmake_minimum_required(VERSION 3.18)

# C++ standard requirements.
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(FactoryMethod LANGUAGES CXX)
file(GLOB HEADER_FILES *.h)

#source_group(headers FILES ${HEADER_FILES})
#source_group("Header Files" FILES ${HEADER_FILES})

include_directories(include)
# find *.cpp 
aux_source_directory(${PROJECT_SOURCE_DIR} SOURCE_FILES)
# Add an executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})


# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
#target_include_directories(learn_observer_pattern
    #PRIVATE 
        #${PROJECT_SOURCE_DIR}/include
#)
