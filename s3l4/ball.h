#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Ball
{
private:
    int x;
    int y;
    string Name = "";
public:
    // Конструктор
    Ball();

    // Фун-ии получения данных из полей
    int GetX();
    int GetY();
    string GetName();

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
};

