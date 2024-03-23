cmake_minimum_required(VERSION 3.29.0)

project(LearnCMAKE VERSION 1.0)

#Adding the subdirectory to find the library header files
add_subdirectory(mylibraries)

# Adding the executable so that the final executable can be created with the name main.exe
add_executable(main main.cpp)

# Adding the include directories for the main executable
target_include_directories(main PUBLIC "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/mylibraries")

# Linking the library to the main executable
target_link_libraries(main PUBLIC mylibrary)