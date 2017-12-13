//
// Created by andrew on 22.11.17.
//

#ifndef SORT_DEMO_H
#define SORT_DEMO_H
#include <Fl/Fl_Browser.H>
#include <FL/Fl_Button.H>
#include <vector>
#include <Fl/fl_ask.H>

class Demo:public Fl_Widget{
    std::vector<Fl_Widget*>t;
    int choice, choosedsort;
    void ibt();
    static void choose(Fl_Widget *w, void*);
    void draw() override {}
public:
    Demo();
    ~Demo() override;
    void hide() override;
    void show() override;
};


#endif //SORT_DEMO_H
