//
// Created by andrew on 15.11.17.
//

#include "NonModal.h"

void NonModal::draw()
{
    Fl_Window::draw();
    fl_rect(20,70,800,(this->h())-100);
    fl_rect(870,70,300,(this->h())-100);
    fl_font(FL_TIMES, 20);
    fl_color(FL_CYAN);
    fl_draw("HERE WE GO",(this->w())/4+30,(this->h())/2);
}

NonModal::~NonModal() {
    exit(0);
}

NonModal::NonModal(int w, int h, const char *title) :
        Fl_Window(w,h,title),
        mainWindowInterface(w,h)
{end();}
