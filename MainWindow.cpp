#include "MainWindow.h"

MainWindow::MainWindow(int w, int h, const char *title) : 
    Fl_Window(w, h, title),
    menubar(0,0,1200,47)
{
        menubar.add("                                Тестирование                                      /"
                            "                                Тема                                ");
        menubar.add("                                Тестирование                                      /"
                            "                                Режим                               ");
        menubar.add("                                Тестирование                                      /"
                            "                                Уровень                             ");
        menubar.add("                                Тестирование                                      /"
                            "                                Таймер                              ");
        menubar.add("                                   О программе                                    ");
        menubar.add("                                  Помощь                                              ");
}

void MainWindow::draw()
{
    Fl_Window::draw();
        fl_line(400,0,400,47);
        fl_line(800,0,800,47);
        fl_line(1200,0,1200,47);
        //=====================//
        fl_rect(30, 75, 330, 500);
        //=====================//
        fl_rect(380, 75, 440, 500);
        //=====================//
        fl_rect(840, 75, 330, 500);
        //=====================//
}