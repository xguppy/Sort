//
// Created by andrew on 22.11.17.
//
#include <iostream>
#include "Demo.h"
#include <Fl/Fl_File_Chooser.H>

Demo::Demo() : Fl_Widget(0,0,1200,600)
{
    int x0=-190, y0=200;
    for(int i=1;i<=5;i++)
    {
        t.push_back(new Fl_Button(x0+=270,y0,230,50));
        t[i-1]->color(FL_LIGHT3);
        if(i==3) { y0+=100; x0=-55; }
    }
    ibt();
    hide();
}

void Demo::hide()
{
    for(auto var : t) var->hide();
}

void Demo::show()
{
    for(auto var : t) var->show();
}

void Demo::ibt() {
    t[0]->label("Сортировка Вставками");
    t[1]->label("Сортировка Шелла");
    t[2]->label("Быстрая Сортировка");
    t[3]->label("Пирамидальная Сортировка");
    t[4]->label("Поразрядная Сортировка");
    for(int i=0;i<5;i++)
    {
        t[i]->callback(choose);
    }
}

Demo::~Demo() {
    for(auto var : t) delete var;
}

void Demo::choose(Fl_Widget *w, void*) {
    int wt=-1;
    wt=fl_choice(w->label(),"Из файла", "Случайно",nullptr);
    const char *fn;
    //std::cout<<wt;
    Fl_File_Chooser ch(".","*",FL_SINGLE,"Выберите файл");
    if(wt==0) {
        ch.show();
        while(ch.shown())
        {
            Fl::wait();
        }
        fn=ch.value();
        if(ch.value()==nullptr) Demo::choose(w,nullptr);
    }
}
