//
// Created by andrew on 17.11.17.
//

#include "Test.h"

void Test::iflb() {flB.add("Test is coming...");}

Test::Test() : Fl_Widget(0,0,1200,600), flB(20,70,850,500) {hide(); iflb();}

void Test::hide() {flB.hide();}

void Test::show() {flB.show();}
