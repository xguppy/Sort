//
// Created by andrew on 15.11.17.
//

#include "About.h"

void About::inittxt()
{
    txt.add("");
    txt.add("\tОбучающую программу по теме Сортировки");
    txt.add("");
    txt.add("\tРазработали студенты группы ДИПРб21/1");
    txt.add("");
    txt.add("\t\t\t\tМурзаев Игорь");
    txt.add("\t\t\tБондаренко Елизавета");
    txt.add("\t\t\tХисматулин Владислав");
}
About::About(int w, int h):
        NonModal(w,h,"О программе"),
        txt(0,0,this->w(),this->h())
{
    inittxt();

}


