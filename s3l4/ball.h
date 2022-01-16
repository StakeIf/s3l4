#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Coin;

class Ball
{
private:
    int x;
    int y;
    string Name = "";
public:
    // Конструктор
    Ball();
    Ball(string name);
    Ball(int x, int y, string name);

    void SetX(int x);
    void SetY(int y);
    void SetName(string name);

    // Фун-ии получения данных из полей
    void GetX(int* xi);
    void GetY(int* yi);
    void GetNameLink(string& name);

    // Деструктор
    ~Ball();

    // Инициализация структуры 
    void SetBall(int x, int y, string Name);

    // Ввод 
    void InpBallData();

    // Вывод  на экран
    void DisplayBall();

    //Сделать шаг
    void MoveBall();

    // Дружественная функция обмена кординатами классов Ball и Coin
    friend void KoordExchange(Ball& ball, Coin& Coin);
};

