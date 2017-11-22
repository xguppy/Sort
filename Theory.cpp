//
// Created by andrew on 20.11.17.
//

#include "Theory.h"


void Theory::iflb() {flB.add("Theory is coming...");}

Theory::Theory() : Fl_Widget(0,0,1200,600), flB(20,70,850,500) {hide(); iflb();}

void Theory::hide() {flB.hide();}

void Theory::show() {flB.show();}
