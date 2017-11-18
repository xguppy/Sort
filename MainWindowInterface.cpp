//
// Created by guppy on 15.11.17.
//

#include "MainWindowInterface.h"
#include "About.h"

MainWindowInterface::Theory::Theory(int w, int h) :
        helpView(20, 70, 500, 800)
{}

void MainWindowInterface::Theory::hide() {
    helpView.hide();
}

void MainWindowInterface::Theory::show() {
    helpView.show();
}

MainWindowInterface::MainWindowInterface(int w, int h) :
        Fl_Widget(0,0,w,h),
        widget(950,50,200,200),
        menuBar(0,0,(this->w()),50)
{
    menuBarInit();
}

void MainWindowInterface::menuBarInit() {
    menuBar.add("Тестирование/Тема");
    menuBar.add("Тестирование/Режим");
    menuBar.add("Тестирование/Уровень");
    menuBar.add("Тестирование/Таймер");
    menuBar.add("О программе",0,showabout,(void*)this);
    menuBar.add("Помощь");
}

void MainWindowInterface::showabout(Fl_Widget *w, void *) {
    static About win(400, 150);
    win.show();
}

void MainWindowInterface::showtheory(Fl_Widget *w, void *) {
    theory.show();
}

MainWindowInterface::MyWidget::MyWidget(int x, int y, int w, int h, const char *L) :
        Fl_Widget(x, y, w, h, L),
        bt1(x, y + 120, (this->w()) - 40, 40, "Теория"),
        bt2(x, y + 200, (this->w()) - 40, 40, "Демонстрация"),
        bt3(x, y + 280, (this->w()) - 40, 40, "Тестирование") {
    //TODO: СДЕЛАТЬ ПРИВЯЗКУ CALLBACK'ОВ
    bt1.color(FL_LIGHT2);
    bt1.callback(showtheory,0);
    bt2.color(FL_LIGHT2);
    bt3.color(FL_LIGHT2);
}
