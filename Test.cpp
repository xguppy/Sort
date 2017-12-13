//
// Created by andrew on 17.11.17.
//

#include "Test.h"

void Test::iflb() {
    disp->buffer(buff);
    buff->text("       \nline 1\nline 2\n"
                       "line 3\nline 4\nline 5\n"
                       "line 6\nline 7\nline 8\n"
                       "line 9\nline 10\nline 11\n"
                       "line 12\nline 13\nline 14\n"
                       "line 15\nline 16\nline 17\n"
                       "line 18\nline 19\nline 20\n"
                       "line 21\nline 22\nline 23\n");

}

Test::Test() : Fl_Widget(0,0,1200,600) {hide(); iflb();}

void Test::hide() {disp->hide(); }

void Test::show() {disp->show(); }
