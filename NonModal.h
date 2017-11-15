//
// Created by andrew on 15.11.17.
//

#ifndef SORT_NONMODAL_H
#define SORT_NONMODAL_H
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include "MainWindowInterface.h"
class NonModal:public Fl_Window
{
    MainWindowInterface mainWindowInterface;
    void draw();
public:
    NonModal(int w, int h, const char *title="Sort");
    ~NonModal() override;
};
#endif //SORT_NONMODAL_H
