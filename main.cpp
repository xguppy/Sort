#include <FL/Fl.H>
#include "NonModal.h"

int main()
{
    NonModal win(1200,600);
    win.show();
    return Fl::run();
}