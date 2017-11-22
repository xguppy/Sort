//
// Created by andrew on 22.11.17.
//

#include "Demo.h"

void Demo::iflb() {flB.add("Demo is coming...");}

Demo::Demo() : Fl_Widget(0,0,1200,600), flB(20,70,850,500) {hide(); iflb();}

void Demo::hide() {flB.hide();}

void Demo::show() {flB.show();}
