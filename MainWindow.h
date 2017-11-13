#ifndef SORT_MAINWINDOW_H
#define SORT_MAINWINDOW_H
#include <Fl/Fl.H>
#include <Fl/Fl_Window.H>
#include <FL/fl_draw.H>
//TODO: Как нибудь вынести заголовочные от хедер
class MainWindow:public Fl_Window {

    MainWindow(int w, int h, const char *title="MainWindow");
};


#endif //SORT_MAINWINDOW_H
