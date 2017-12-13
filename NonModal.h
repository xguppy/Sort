//
// Created by andrew on 15.11.17.
//

#ifndef SORT_NONMODAL_H
#define SORT_NONMODAL_H
#include <FL/Fl.H>
#include <Fl/Fl_Menu_Bar.H>
#include <Fl/Fl_Button.H>
#include <Fl/Enumerations.H>
#include <Fl/fl_draw.H>
#include <Fl/Fl_Box.H>
#include "Theory.h"
#include "Demo.h"
#include "Test.h"
#include "About.h"

class NonModalWindow:public Fl_Window{
    Fl_Menu_Bar *topbar=new Fl_Menu_Bar(0,0,1200,30);

    Fl_Button *bt1=new Fl_Button(950,200,200,35,"Теория"),
            *bt2=new Fl_Button(950,260,200,35,"Демонстрация"),
            *bt3=new Fl_Button(950,320,200,35,"Тестирование"); //rightbar

    Fl_Widget **base=new Fl_Widget*[6];

    static void showtheory(Fl_Widget *w, void* ptr);

    static void showtest(Fl_Widget *w, void* ptr);

    static void showdemo(Fl_Widget *w, void* ptr);

    static void cb(Fl_Widget *w, void*);

    void tbi();

    void draw() override { Fl_Window::draw();}

    void hide() override;
public:
    NonModalWindow(int w, int h, const char *title);
};

#endif //SORT_NONMODAL_H
