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
    // �����������
    Ball();

    // ���-�� ��������� ������ �� �����
    void GetX(int* xi);
    void GetY(int* yi);
    void GetNameLink(string& name);

    // ����������
    ~Ball();

    // ������������� ��������� 
    void SetBall(int x, int y, string Name);

    // ���� 
    void InpBallData();

    // �����  �� �����
    void DisplayBall();

    //������� ���
    void MoveBall();

    // ������������� ������� ������ ����������� ������� Ball � Coin
    friend void KoordExchange(Ball& ball, Coin& Coin);
};

