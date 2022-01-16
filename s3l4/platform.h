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

    // Конструктор с одним параметром ВЫсота
    Platform(int height);

    // Конструктор 
    Platform(int angle, int height);

    void SetAngle(int angle);
    void SetHeight(int height);


    // Фун-ии получения данных из полей
    int GetAngle();
    int GetHeight();

    // Деструктор
    ~Platform();

    // Ввод 
    void InpPlatformData();

    // Вывод  на экран
    void DisplayPlatform();

    //Случайное изменение угла
    void RandRotatePlatform();

    // Перегрузка оператора '+' (Platform + int)
    friend Platform operator+(const Platform& platform, int angle);

    // Перегрузка префиксного оператора '++'
    Platform& operator++();

    // Перегрузка постфиксного оператора '++'
    Platform operator++ (int);
};
