#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Coord
{
protected:
    int x = 0;        
    int y = 0;      

public:

    Coord();

    Coord(int x, int y);

    // Установить фамилию
    void SetX(int x);

    // Установить имя
    void SetY(int y);

    // Фун-ии получения данных из полей
    int GetX();
    int GetY();

    // Фун-ии получения данных из полей через ссылку
    //void GetXLink(int& x);
    //void GetYLink(int& y);

    // Деструктор
    ~Coord();

    // Инициализация класса 
    void Set(int x, int y);

    // Ввод 
    virtual void Inp() = 0;

    // Ввод  на экран
    void Display();

    // Виртуальная функция вывода сообщения на экран, чем является объект
    virtual string Who();

    // вывести координаты
    void MyLocation();

};

