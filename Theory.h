//
// Created by andrew on 20.11.17.
//

#ifndef SORT_THEORY_H
#define SORT_THEORY_H
#include <Fl/Fl_Browser.H>

class Theory:public Fl_Widget{
    Fl_Browser flB; //для теста
    void iflb();
    void draw() override {}
public:
    Theory();
    void hide() override;
    void show() override;
};


#endif //SORT_THEORY_H
