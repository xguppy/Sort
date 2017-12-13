//
// Created by andrew on 13.12.17.
//

#include "SortWindow.h"

void SortWindow::ibt() {
    bt1->label("Предыдущее");
    bt2->label("Следующее");
}

void SortWindow::setfile(char *name) {
    filename=name;
}

std::string SortWindow::getfile() {
    return filename;
}

void SortWindow::addState(State a) {
    b.push_back(a);
}

State SortWindow::current() {
    return b[k];
}

void SortWindow::showstate() {
    t->value(b[k].statestr);
}
