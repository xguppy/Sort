//
// Created by andrew on 17.11.17.
//

#ifndef SORT_TEST_H
#define SORT_TEST_H
#include <Fl/Fl_Browser.H>

class Test:public Fl_Widget{
    Fl_Browser flB; //для теста
    void draw() override {}
    void iflb();
public:
    Test();
    void hide() override;
    void show() override;
};

#endif //SORT_TEST_H