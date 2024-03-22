cmake_minimum_required(VERSION 3.29.0)

project(LearnCMAKE VERSION 1.0)

add_subdirectory(mylibraries)

add_executable(main main.cpp)

target_include_directories(main PUBLIC "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/mylibraries")

target_link_libraries(main PUBLIC mylibrary)