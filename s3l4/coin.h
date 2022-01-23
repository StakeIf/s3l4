#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

#include "ball.h"
#include "Coord.h"


using namespace std;

class Coin : public Coord
{
private:
    //int x = 0;
    //int y = 0;
public:
    // Конструктор
    Coin();
    Coin(int x);
    Coin(int x, int y);

    /*
    void SetX(int x); 
    void SetY(int y);

    // Фун-ии получения данных из полей
    int GetX();
    int GetY();
    */
    // Деструктор
    ~Coin();

    // Инициализация структуры 
    void SetCoin(int x, int y);

    // Ввод 
    //void InpCoinData();

    // Вывод  на экран
    void DisplayCoin();

    //Случайная смена положени монеты (смена координат х у)
    void RandXYCoin();

    // Дружественная функция обмена кординатами классов Ball и Coin
    friend void KoordExchange(Ball& ball, Coin& Coin);

    // Виртуальная функция вывода сообщения на экран, чем является объект
    string Who();
};
