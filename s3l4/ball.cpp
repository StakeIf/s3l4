#include "Ball.h"

// Конструкторы
Ball::Ball()
{
    this->x = 0;
    this->y = 0;
    this->Name = "";

    x = 0;
}
Ball::Ball(string name)
{
    x = 0;
    y = 0;
    this->Name = name;
}
//Конструктор с параметрами 
Ball::Ball(int x, int y, string name): Coord(x,y)
{
    this->Name = name;
}

/*
//Установщики значений
void Ball::SetX(int x) 
{
    this->x = x;
}

void Ball::SetY(int y)
{
    this->y = y;
}
*/

void Ball::SetName(string name)
{
    this->Name = name;
}

/*
// Фун-ии получения данных из полей
void Ball::GetX(int* xi)
{
    *xi = x;
}

void Ball::GetY(int* yi)
{
    *yi = y;
}
*/

void Ball::GetNameLink(string& name)
{
    name = this->Name;
}

// Ввод 
void Ball::Inp()
{
    Coord::Inp();
    cout << "Введите имя шара: ";
    cin >> Name;
}

// Вывод 
void Ball::DisplayBall()
{
    cout << "Данные шара: \n  x = " << x << "\n  y = " << y << "\n  Name -  " << Name << endl;

}

void Ball::MoveBall() {
    cout << "Press \n  'D' to increase the x value \n  'A' to decrease the x value\n  'W' to increase the y value\n  'S' to decrease the y value\n" << endl;
    char key = _getch();
    if (key == 'a')
        x--;
    if (key == 'd')
        x++;
    if (key == 'w')
        y++;
    if (key == 's')
        y--;
}

// Деструктор
Ball::~Ball()
{
    ;
}

// Виртуальная функция вывода сообщения на экран, чем является объект
string Ball::Who()
{
    return "Мяч ";
}

//Перегрузка оператора присваивания 
Ball& Ball::operator=(Coord& xy) 
{
    this->x = xy.GetX();
    this->y = xy.GetY();

    return *this;
}

// Расширение действий оператора <<
std::ostream& operator<< (std::ostream& out, const Ball& ball) 
{
    out << "Данные шара: \n  x = " << ball.x << "\n  y = " << ball.y << "\n  Name -  " << ball.Name << endl;

    return out;
}

