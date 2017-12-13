cmake_minimum_required(VERSION 3.8)

FIND_PACKAGE(FLTK REQUIRED NO_MODULE)
include_directories($(FLTK_INCLUDE_DIRS))
link_directories($(FLTK_LIBRARY_DIRS))
add_definitions($(FLTK_DEFINISTIONS))

project(SORT)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp About.h About.cpp NonModal.h NonModal.cpp Test.cpp Test.h Theory.cpp Theory.h Demo.cpp Demo.h
        Fl_Html_Formatter.H Fl_Html_Formatter.cxx Fl_Html_Object.H Fl_Html_Object.cxx Fl_Html_Parser.H Fl_Html_Parser.cxx
        Fl_Html_Tag_table.H Fl_Html_View.H Fl_Html_View.cxx SortWindow.cpp SortWindow.h SortInsert.cpp SortInsert.h)
add_executable(SORT ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(SORT fltk fltk_images)