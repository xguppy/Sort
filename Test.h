//
// Created by andrew on 17.11.17.
//

#ifndef SORT_TEST_H
#define SORT_TEST_H
#include <Fl/Fl_Browser.H>
#include <Fl/Fl_Text_Buffer.H>
#include <Fl/Fl_Text_Display.H>
#include <Fl/Fl_Check_Browser.H>

//ДЛЯ ВВОДА МНОГОСТРОЧНОГО ОТВЕТА -- FL_INPUT

class Test:public Fl_Widget{
    Fl_Text_Display *disp = new Fl_Text_Display(20,50,850,500);
    Fl_Text_Buffer *buff = new Fl_Text_Buffer();
    void draw() override {}
    void iflb();
public:
    Test();
    void hide() override;
    void show() override;
};

#endif //SORT_TEST_H
