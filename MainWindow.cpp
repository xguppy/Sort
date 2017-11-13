#include "MainWindow.h"

MainWindow::MainWindow(int w, int h, const char *title) : 
    Fl_Window(w, h, title),
    menubar(0,0,1200,50)
{
        menubar.add("                                Тестирование                                ");
        menubar.add("                                   О программе                                    ");
        menubar.add("                                             Помощь                                         ");
}

void MainWindow::draw()
{
    set_tooltip_window();
    fl_color(0,0,0);
    fl_line(0,50,1200,50);
    //=====================//
    fl_rect(30, 75, 330, 500);
    //=====================//
    fl_rect(380, 75, 440, 500);
    //=====================//
    fl_rect(840, 75, 330, 500);
    //=====================//
}
