#include <FL/Fl.H>
#include "NonModal.h"

int main()
{
    auto *win = new NonModalWindow(1200,600,"Сортировки");
    win->show();
    return Fl::run();
}