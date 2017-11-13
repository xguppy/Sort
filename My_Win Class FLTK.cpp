#include <Fl/Fl.H>
#include <Fl/Fl_Window.H>
#include <FL/fl_draw.H>

class My_Win:public Fl_Window{ //паблик наследование от базового класса Fl_Window
public:
    //Конструктор инициализации:
    My_Win(int w, int h, const char *title="MainW"):
    //w=ширина окна, h=высота окна, title=заголовок окна
    Fl_Window(w, h, title)
    {
        show(); //показать окно
    }
};

int main()
{
    My_Win win(300, 200, "Тест"); //создание объекта класса M_Win
    return Fl::run(); //запуск обработчика событий
}