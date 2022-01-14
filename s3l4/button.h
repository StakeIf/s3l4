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

    static Button* lastButton;
    Button* prev;
    Button* next;
public:
    // Конструктор
    Button();

    // Конструктор
    Button(bool OnOff);

    // Фун-ии получения данных из полей
    int GetOnOff();

    // Деструктор
    ~Button();

    // Инициализация структуры 
    void SetButton(bool onofi);

    // Вывод  на экран
    void DisplayButton();

    void Add(void);
    static void reprint(void);

    //нажать на кнопку
    void PressButton();
};
