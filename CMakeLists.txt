cmake_minimum_required(VERSION 3.8)

FIND_PACKAGE(FLTK REQUIRED NO_MODULE)
include_directories($(FLTK_INCLUDE_DIRS))
link_directories($(FLTK_LIBRARY_DIRS))
add_definitions($(FLTK_DEFINISTIONS))

project(SORT)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp About.h About.cpp NonModal.h NonModal.cpp Test.cpp Test.h Theory.cpp Theory.h Demo.cpp Demo.h)
add_executable(SORT ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(SORT fltk)