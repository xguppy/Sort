//
// Created by andrew on 15.11.17.
//

#ifndef SORT_ABOUT_H
#define SORT_ABOUT_H
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Menu_Bar.H>
#include <Fl/Fl_Browser.H>
#include "NonModal.h"

class About:public NonModal
{
    Fl_Browser txt;
    void inittxt();
public:
    About(int w, int h);
};

#endif //SORT_ABOUT_H
