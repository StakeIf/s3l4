#include "Coord.h"

// Конструктор
Coord::Coord()
{
    x = 0;
    y = 0;
}

Coord::Coord(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Coord::SetX(int x) {
    this->x = x;
}
void Coord::SetY(int y) {
    this->y = y;
}

void Coord::Set(int x, int y) {
    this->x = x;
    this->y = y;
}


// Фун-ии получения данных из полей
int Coord::GetX()
{
    return x;
}

int Coord::GetY()
{
    return y;
}

// Ввод координат
void Coord::Inp()
{
    cout << "Введите x-координатy: ";
    cin >> x;
    cout << "Введите y-координату: ";
    cin >> y;
}

// Вывод 
void Coord::Display()
{
    cout << "Данные точки: \n  x = " << x << "\n  y = " << y << endl;
}

// Деструктор
Coord::~Coord()
{
    ;
}

// Виртуальная/не виртуальная функция вывода сообщения на екран, чем является объект
string Coord::Who()
{
    return "Точка с координатами ";
}

// вывести координаты
void Coord::MyLocation()
{
    cout << Who() << "Расположение: х = "<< x << " y = " << y << endl;
}


