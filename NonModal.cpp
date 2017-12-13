//
// Created by andrew on 15.11.17.
//

#include "NonModal.h"
#include <iostream>

void NonModalWindow::showtheory(Fl_Widget *w, void *ptr) {
    auto **t = (Fl_Widget**)ptr;
    t[0]->show();
    t[1]->hide();
    t[2]->hide();
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
    topbar->add("Тестирование/Настройка таймера/15 мин\t",0,0,0,FL_MENU_RADIO);
    topbar->add("Тестирование/Настройка таймера/20 мин\t",0,0,0,FL_MENU_RADIO);
    topbar->add("Тестирование/Настройка таймера/35 мин\t",0,0,0,FL_MENU_RADIO);
    topbar->add("Тестирование/Настройка таймера/40 мин\t",0,0,0,FL_MENU_RADIO);
    //TODO: MAKE CALLBACKS FOR THEME CHOOSING
    topbar->add("Тестирование/Выбор темы/Сортировка вставками\t",0,0,0,FL_MENU_TOGGLE);
    topbar->add("Тестирование/Выбор темы/Быстрая сортировка\t",0,0,0,FL_MENU_TOGGLE);
    topbar->add("Тестирование/Выбор темы/Сортировка Шелла\t",0,0,0,FL_MENU_TOGGLE);
    topbar->add("Тестирование/Выбор темы/Пирамидальная сортировка\t",0,0,0,FL_MENU_TOGGLE);
    topbar->add("Тестирование/Выбор темы/Поразрядная сортировка\t",0,0,0,FL_MENU_TOGGLE);
    //==========================================//
    //TODO: MAKE RADIO BUTTONS
    topbar->add("Тестирование/Выбор уровня сложности/Лёгкий\t",0,0,0,FL_MENU_RADIO);
    topbar->add("Тестирование/Выбор уровня сложности/Средний\t",0,0,0,FL_MENU_RADIO);
    topbar->add("Тестирование/Выбор уровня сложности/Сложный\t",0,0,0,FL_MENU_RADIO);
    //==========================================//
    topbar->add("О программе",0,cb);
    //==========================================//
    //TODO: MAKE HELP WINDOW (INCLUDING RULES FOR USING THIS PROG)
    topbar->add("Помощь");
    //=========================================//
    //TODO: MAKE AN INTERFACE SETTINGS (EX. COLOR PICKER FOR INTERFACE, FONT, ?THEME?)
    topbar->add("Настройки");
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
    base[2]=new Test(); //
    base[3]=bt1; //кнопка теория
    base[4]=bt2; //кнопка демонстрация
    base[5]=bt3; //кнопка тестирование
    //=========================================================//
    base[0]->show(); //сразу показываем теорию
    base[3]->color(FL_CYAN); //окрашиваем кнопку теории в FL_CYAN цвет
    bt1->callback(showtheory,base);
    bt2->callback(showdemo,base);
    bt3->callback(showtest,base);
    Fl_Window::resizable(base[0]);
    tbi();
    end();
}
