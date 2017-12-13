//
// Created by andrew on 20.11.17.
//

#ifndef SORT_THEORY_H
#define SORT_THEORY_H
#include <Fl/Fl_Browser.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Box.H>
#include <Fl/Fl_Hold_Browser.H>
#include <Fl/Fl_Tree.H>

//TODO: НАПИСАТЬ CALLBACK ДЛЯ FL_HOLD_BROWSER (СМОТРИ CHEAT SHEET: "USING FL_BROWSER TO MAKE A 'VERTICAL TABBED' DIALOG")
//TODO: СОЗДАТЬ ПОЛЕ FL_GROUP В КЛАССЕ THEORY (^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^)

class Theory:public Fl_Widget{
    //Fl_Hold_Browser *bro = new Fl_Hold_Browser(20,50,200,500);
    Fl_Group *grp[5] = {/*Инициализировать столькими нулями, сколько страниц (N)*/ 0,0,0,0,0}; //[количество страниц] (5-для теста)
    Fl_Browser *flB = new Fl_Browser(220,50,650,500); //для теста
    Fl_Button *p = new Fl_Button(40,555,80,35,"◄");
    Fl_Button *n = new Fl_Button(770,555,80,35,"►");
    Fl_Box *num=new Fl_Box(415,565,20,20);
    Fl_Tree *bro = new Fl_Tree(20,50,200,500);
    void iflb();
    void broi();
    void draw() override {}
public:
    Theory();
    void hide() override;
    void show() override;
};


#endif //SORT_THEORY_H
