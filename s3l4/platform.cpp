#include "platform.h"

// Конструктор
Platform::Platform()
{
    angle = 0;
    height = 0;
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

// Инициализация структуры 
void Platform::SetPlatform(int anglei, int heighti)
{
    angle = anglei;
    height = heighti;
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
    cout << "Данные платформы: \n  x = " << angle << "\n  y = " << height << endl;

}

void Platform::RandRotatePlatform() {
    angle = rand() % 15;
}

// Деструктор
Platform::~Platform()
{
    ;
}
