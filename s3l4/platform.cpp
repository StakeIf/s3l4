#include "platform.h"

// Конструктор
Platform::Platform()
{
    angle = 0;
    height = 0;
}

// Конструктор с одним параметром
Platform::Platform(int height)
{
    angle = 0;
    this->height = height;
}

// Конструктор с параметрами
Platform::Platform(int angle, int height)
{
    this->angle = angle;
    this->height = height;
}

//Установка угла
void Platform::SetAngle(int angle) 
{
    this->angle = angle;
}
//Установка длины
void Platform::SetHeight(int height)
{
    this->height = height;
}

// Фун-ии получения данных из полей
int Platform::GetAngle()
{
    return angle;
}

int Platform::GetHeight()
{
    return height;
}

// Ввод 
void Platform::InpPlatformData()
{
    cout << "Введите угол наклона платформы: ";
    cin >> angle;
    cout << "Введите длину платформы: ";
    cin >> height;
}

// Вывод 
void Platform::DisplayPlatform()
{
    cout << "Данные платформы: \n  Angle = " << angle << "\n  Height = " << height << endl;

}

void Platform::RandRotatePlatform() {
    angle = rand() % 15;
}

// Деструктор
Platform::~Platform()
{
    ;
}

// Выполняем Platform + int
Platform operator+(const Platform& platform, int angle)
{
    if (platform.angle + angle > 90)
        return platform;
    else
        return Platform(platform.angle + angle, platform.height);
}
// Перегрузка префиксного оператора '++'
Platform& Platform::operator++()
{
    angle += 1;
    return *this;
}
// Перегрузка постфиксного оператора '++'
Platform Platform::operator++ (int)
{
    Platform m1 = *this;
    ++* this;
    return m1;
}
