#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Menu_Bar.H>

class Help
{

};

class About
{

};

class Test
{

};

class Theory
{

};

class Demo
{

};

class MainWindowInterface:public Fl_Widget
{

    class MyWidget:public Fl_Widget {
    private:
        Fl_Button bt1, bt2, bt3;
        void draw() override
        {

        }
    public:
        MyWidget(int x, int y, int w, int h, const char *L = 0) :
                Fl_Widget(x, y, w, h, L),
                bt1(x, y + 120, (this->w()) - 40, 40, "Теория"),
                bt2(x, y + 200, (this->w()) - 40, 40, "Демонстрация"),
                bt3(x, y + 280, (this->w()) - 40, 40, "Тестирование") {
            //TODO: СДЕЛАТЬ ПРИВЯЗКУ CALLBACK'ОВ
            bt1.color(FL_LIGHT2);
            bt2.color(FL_LIGHT2);
            bt3.color(FL_LIGHT2);
        }
    };
    MyWidget widget;
    Fl_Menu_Bar menuBar;
    void menuBarInit()
    {
        menuBar.add("Тестирование/Тема");
        menuBar.add("Тестирование/Режим");
        menuBar.add("Тестирование/Уровень");
        menuBar.add("Тестирование/Таймер");
        menuBar.add("О программе");
        menuBar.add("Помощь");
    }
    void draw() override
    {

    }
public:
    MainWindowInterface(int w, int h):
            Fl_Widget(0,0,w,h),
            widget(950,50,200,200),
            menuBar(0,0,(this->w()),50)
    {
        menuBarInit();
    }
};


class NonModal:public Fl_Window
{
    MainWindowInterface mainWindowInterface;
    void draw()
    {
        Fl_Window::draw();
        fl_rect(20,70,800,(this->h())-100);
        fl_rect(870,70,300,(this->h())-100);
        fl_font(FL_TIMES, 20);
        fl_color(FL_CYAN);
        fl_draw("HERE WE GO",(this->w())/4+30,(this->h())/2);
    }
public:
    NonModal(int w, int h, const char *title="Sort"):
            Fl_Window(w,h,title),
            mainWindowInterface(w,h)
    {end();}
};

int main()
{
    NonModal win(1200,600);
    win.show();
    return Fl::run();
}