//
// Created by andrew on 15.11.17.
//

#ifndef SORT_ABOUT_H
#define SORT_ABOUT_H
#include <FL/fl_draw.H>
#include <Fl/Fl_Browser.H>

class About:public Fl_Window{
    Fl_Browser *txt = new Fl_Browser(0, 0, 400, 200);
    void tbi();
public:
    About();
    ~About() override;
};

#endif //SORT_ABOUT_H
