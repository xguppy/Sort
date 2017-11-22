//
// Created by andrew on 22.11.17.
//

#ifndef SORT_DEMO_H
#define SORT_DEMO_H
#include <Fl/Fl_Browser.H>

class Demo:public Fl_Widget{
    Fl_Browser flB; //для теста
    void draw() override {}
    void iflb();
public:
    Demo();
    void hide() override;
    void show() override;
};


#endif //SORT_DEMO_H
