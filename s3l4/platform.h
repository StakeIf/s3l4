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
    int angle; //���� ������� ���������
    int height;  //�����
public:
    // �����������
    Platform();

    // �����������
    Platform(int angle, int height);

    // ���-�� ��������� ������ �� �����
    int GetAngle();
    int GetHeight();

    // ����������
    ~Platform();

    // ������������� ��������� 
    void SetPlatform(int anglei, int heighti);

    // ���� 
    void InpPlatformData();

    // �����  �� �����
    void DisplayPlatform();

    //��������� ��������� ����
    void RandRotatePlatform();

    // ���������� ��������� '+' (Platform + int)
    friend Platform operator+(const Platform& Platform, int value);
    // ���������� ����������� ��������� '++'
    Platform& operator++();
    // ���������� ������������ ��������� '++'
    Platform operator++ (int);
};
