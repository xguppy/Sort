//
// Created by andrew on 13.12.17.
//

#ifndef SORT_SORTWINDOW_H
#define SORT_SORTWINDOW_H

#include <vector>
#include <string>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <Fl/Fl_Multiline_Output.H>
#include <Fl/fl_draw.H>

struct State{
    std::vector<int> cur;
    char statestr[255];
    std::pair<int,int> sw;
};

class SortWindow {
    Fl_Window *win=nullptr;
    std::vector<State> b;
    int k;
    Fl_Button *bt1, *bt2;
    Fl_Multiline_Output *t;
    std::string filename;
    void ibt();
public:

    void setfile(char *name);
    std::string getfile();
    void addState(State a);
    State current();
    virtual void showstate();
    virtual void draw()=0;
};


#endif //SORT_SORTWINDOW_H
