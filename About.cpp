//
// Created by andrew on 15.11.17.
//

#include "About.h"


void About::tbi() {
    txt->add("");
    txt->add("\tОбучающую программу по теме Сортировки");
    txt->add("");
    txt->add("\tРазработали студенты группы ДИПРб21/1");
    txt->add("");
    txt->add("\t\t\t\tМурзаев Игорь");
    txt->add("\t\t\tБондаренко Елизавета");
    txt->add("\t\t\tХисматулин Владислав");
}

About::About() : Fl_Window(400,150,"О программе")
{tbi(); end();}

About::~About() {delete txt;}
