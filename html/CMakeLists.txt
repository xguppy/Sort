cmake_minimum_required(VERSION 3.8)
project(html)

set(CMAKE_CXX_STANDARD 11)

FIND_PACKAGE(FLTK REQUIRED NO_MODULE)
include_directories($(FLTK_INCLUDE_DIRS))
link_directories($(FLTK_LIBRARY_DIRS))
add_definitions($(FLTK_DEFINITIONS))

set(SOURCE_FILES
        Fl_Html_Formatter.cxx
        Fl_Html_Formatter.H
        Fl_Html_Object.cxx
        Fl_Html_Object.H
        Fl_Html_Parser.cxx
        Fl_Html_Parser.H
        Fl_Html_Tag_table.H
        Fl_Html_View.cxx
        Fl_Html_View.H
        main.cxx)

add_executable(html ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(html fltk fltk_images)