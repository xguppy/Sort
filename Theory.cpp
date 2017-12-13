//
// Created by andrew on 20.11.17.
//

#include "Theory.h"
#include <iostream>


void Theory::iflb() {flB->add("Theory is coming...");}

Theory::Theory() : Fl_Widget(0,0,1200,600) {
    num->labelfont(FL_TIMES_BOLD);
    num->label(FL_NORMAL_LABEL,"7/30");
    hide();
    broi();
    iflb();
}

void Theory::hide() {
    flB->hide();
    num->hide();
    n->hide();
    p->hide();
    bro->hide();
}

void Theory::show() {
    flB->show();
    num->show();
    n->show();
    p->show();
    bro->show();
}

void Theory::broi() {
    bro->root_label("Сортировки");
    bro->add("Сортировка Вставками");
    bro->add("Быстрая сортировка");
    bro->add("Сортировка Шелла");
    bro->add("Пирамидальная сортировка");
    bro->add("Поразрядная сортировка");
    //bro->show_self();
}
