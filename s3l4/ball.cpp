#include "Ball.h"

// Конструктор
Ball::Ball()
{
    x = 0;
    y = 0;
    Name = "";
}

// Фун-ии получения данных из полей
int Ball::GetX()
{
    return x;
}

int Ball::GetY()
{
    return y;
}

string Ball::GetName()
{
    return this->Name;
}


// Инициализация структуры 
void Ball::SetBall(int xi, int yi, string Namei)
{
    x = xi;
    y = yi;
    this->Name = Namei;
}

// Ввод 
void Ball::InpBallData()
{
    cout << "Введите x-координату шара: ";
    cin >> x;
    cout << "Введите y-координату шара: ";
    cin >> y;
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
