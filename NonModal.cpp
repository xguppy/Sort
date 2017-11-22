//
// Created by andrew on 15.11.17.
//

#include "NonModal.h"

void NonModalWindow::showtheory(Fl_Widget *w, void *ptr) {
    auto **t = (Fl_Widget**)ptr;
    t[1]->hide();
    t[2]->hide();
    t[0]->show();
    t[3]->color(FL_CYAN);
    t[4]->color(FL_LIGHT2);
    t[5]->color(FL_LIGHT2);
}

void NonModalWindow::showdemo(Fl_Widget *w, void *ptr) {
    auto **t = (Fl_Widget**)ptr;
    t[0]->hide();
    t[1]->show();
    t[2]->hide();
    t[3]->color(FL_LIGHT2);
    t[4]->color(FL_CYAN);
    t[5]->color(FL_LIGHT2);
}

void NonModalWindow::showtest(Fl_Widget *w, void *ptr) {
    auto **t = (Fl_Widget**)ptr;
    t[0]->hide();
    t[1]->hide();
    t[2]->show();
    t[3]->color(FL_LIGHT2);
    t[4]->color(FL_LIGHT2);
    t[5]->color(FL_CYAN);
}

void NonModalWindow::cb(Fl_Widget *w, void *) {
    static auto *win = new About();
    win->show();
}

void NonModalWindow::tbi() {
    //TODO: MAKE CHECKBOXES FOR SUB-SUBMENU
    topbar->add("Тестирование/Настройка таймера/15 мин");
    topbar->add("Тестирование/Настройка таймера/20 мин");
    topbar->add("Тестирование/Настройка таймера/35 мин");
    topbar->add("Тестирование/Настройка таймера/40 мин");
    topbar->add("Тестирование/Выбор темы/Сортировка вставками");
    topbar->add("Тестирование/Выбор темы/Быстрая сортировка");
    topbar->add("Тестирование/Выбор темы/Сортировка Шелла");
    topbar->add("Тестирование/Выбор темы/Пирамидальная сортировка");
    topbar->add("Тестирование/Выбор темы/Поразрядная сортировка");
    //==========================================//
    //TODO: MAKE RADIO BUTTONS
    topbar->add("Тестирование/Выбор уровня сложности/Лёгкий");
    topbar->add("Тестирование/Выбор уровня сложности/Средний");
    topbar->add("Тестирование/Выбор уровня сложности/Сложный");
    //==========================================//
    topbar->add("О программе",0,cb);
    //==========================================//
    //TODO: MAKE HELP WINDOW (INCLUDING RULES FOR USING THIS PROG)
    topbar->add("Помощь");
}

void NonModalWindow::hide() {
    for(int i=0;i<3;i++)
    {
        delete base[i];
    }
    delete [] base;
    exit(0);
}

NonModalWindow::NonModalWindow(int w, int h, const char *title) : Fl_Window(w,h,title)
{
    base[0]=new Theory();
    base[1]=new Demo();
    base[2]=new Test();
    base[3]=bt1;
    base[4]=bt2;
    base[5]=bt3;
    base[0]->show();
    base[3]->color(FL_CYAN);
    bt1->callback(showtheory,base);
    bt2->callback(showdemo,base);
    bt3->callback(showtest,base);
    tbi();
    end();
}
