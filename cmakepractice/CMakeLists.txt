cmake_minimum_required(VERSION 3.5)

project(cmakepractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(test/)

add_executable(cmakepractice main.cpp)
target_link_directories(cmakepractice PUBLIC test/)
target_link_libraries(cmakepractice PUBLIC test)

install(TARGETS cmakepractice
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
