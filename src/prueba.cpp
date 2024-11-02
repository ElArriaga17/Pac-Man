#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>
#include <math.h>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
   
    while (true)
    {
        int x=frame;
        int y= sqrt(x+10)-5;
    auto can = Canvas(150,150);
    can.DrawPointCircle(1+x,3+(4*y),15);
    can.DrawPointLine(50,70,80,70);
    can.DrawPointLine(50,45,80,45);
    can.DrawPointLine(50,45,50,70);
    can.DrawPointLine(80,45,80,70);
    can.DrawPointLine(40,55,65,30);
    can.DrawPointLine(65,30,90,55);
    can.DrawPointLine(0,70,150,70);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Black,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.05s);
        frame++;
    }

    return 0;
}