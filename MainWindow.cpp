#include "MainWindow.h"

MainWindow::MainWindow(int w, int h, const char *title) : Fl_Window(w, h, title){}

void MainWindow::draw()
{
    set_tooltip_window();
    fl_color(0,0,0);
    fl_line(0,50,1200,50);
    //======================//
    fl_line(400,0,400,50);
    fl_line(800,0,800,50);
    fl_line(1200,0,1200,50);
    //=====================//
    fl_rect(30, 75, 330, 500);
    //=====================//
    fl_rect(380, 75, 440, 500);
    //=====================//
    fl_rect(840, 75, 330, 500);
    //=====================//
}
