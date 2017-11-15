//
// Created by andrew on 15.11.17.
//

#include "About.h"
    void About::inittxt()
    {
        txt.add("THINK ABOUT IT");
        txt.add("VISOHNI");
    }
    About::About(int w, int h):
            Fl_Window(w,h,"О программе"),
            txt(0,0,this->w(),this->h())
    {inittxt();end();}


