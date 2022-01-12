#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Platform
{
private:
    int angle; //Угол наклона платформы
    int height;  //Форма
public:
    // Конструктор
    Platform();

    // Фун-ии получения данных из полей
    int GetAngle();
    int GetHeight();

    // Деструктор
    ~Platform();

    // Инициализация структуры 
    void SetPlatform(int anglei, int heighti);

    // Ввод 
    void InpPlatformData();

    // Вывод  на экран
    void DisplayPlatform();

    //Случайное изменение угла
    void RandRotatePlatform();
};
