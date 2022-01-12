#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Coin
{
private:
    int x;
    int y;
public:
    // Конструктор
    Coin();

    // Фун-ии получения данных из полей
    int GetX();
    int GetY();

    // Деструктор
    ~Coin();

    // Инициализация структуры 
    void SetCoin(int x, int y);

    // Ввод 
    void InpCoinData();

    // Вывод  на экран
    void DisplayCoin();

    //Случайная смена положени монеты (смена координат х у)
    void RandXYCoin();
};
