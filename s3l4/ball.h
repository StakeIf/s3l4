#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>
#include "Coord.h"


using namespace std;

class Coin;

class Ball : public Coord
{
private:
    string Name = "";
public:
    // Конструктор
    Ball();
    Ball(string name);
    Ball(int x, int y, string name);

    //void SetX(int x);
    //void SetY(int y);
    void SetName(string name);

    // Фун-ии получения данных из полей
    //void GetX(int* xi);
    //void GetY(int* yi);
    void GetNameLink(string& name);

    // Деструктор
    ~Ball();

    // Инициализация структуры 
    //void SetBall(int x, int y, string Name);

    // Ввод 
    virtual void Inp();

    // Вывод  на экран
    void DisplayBall();

    //Сделать шаг
    void MoveBall();

    // Дружественная функция обмена кординатами классов Ball и Coin
    friend void KoordExchange(Ball& ball, Coin& Coin);

    // Виртуальная функция вывода сообщения на экран, чем является объект
    string Who();

    //Перегрузка оператора присваивания 
    Ball& operator=(Coord& xy);

    // Расширение действий оператора <<
    friend std::ostream& operator<< (std::ostream& out, const Ball& ball);
};

