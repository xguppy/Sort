# Sort
Курсовая

CMakeList's content for using FLTK:

cmake_minimum_required(VERSION 3.8)

FIND_PACKAGE(FLTK REQUIRED NO_MODULE)
include_directories($(FLTK_INCLUDE_DIRS))
link_directories($(FLTK_LIBRARY_DIRS))
add_definitions($(FLTK_DEFINISTIONS))

project(PROJECTNAME)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(PROJECTNAME ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(PROJECTNAME fltk)

where PROJECTNAME is your project name;)
