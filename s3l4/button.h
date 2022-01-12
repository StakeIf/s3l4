#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Button
{
private:
    bool OnOff; //Угол наклона платформы
public:
    // Конструктор
    Button();

    // Фун-ии получения данных из полей
    int GetOnOff();

    // Деструктор
    ~Button();

    // Инициализация структуры 
    void SetButton(bool onofi);

    // Вывод  на экран
    void DisplayButton();

    //нажать на кнопку
    void PressButton();
};
