#include "platform.h"

// �����������
Platform::Platform()
{
    angle = 0;
    height = 0;
}

// �����������
Platform::Platform(int angle, int height)
{
    this->angle = angle;
    this->height = height;
}

// ���-�� ��������� ������ �� �����
int Platform::GetAngle()
{
    return angle;
}

int Platform::GetHeight()
{
    return height;
}

// ������������� ��������� 
void Platform::SetPlatform(int anglei, int heighti)
{
    angle = anglei;
    height = heighti;
}

// ���� 
void Platform::InpPlatformData()
{
    cout << "������� ���� ������� ���������: ";
    cin >> angle;
    cout << "������� ����� ���������: ";
    cin >> height;
}

// ����� 
void Platform::DisplayPlatform()
{
    cout << "������ ���������: \n  Angle = " << angle << "\n  Height = " << height << endl;

}

void Platform::RandRotatePlatform() {
    angle = rand() % 15;
}

// ����������
Platform::~Platform()
{
    ;
}

// ��������� Platform + int
Platform operator+(const Platform& platform, int angle)
{
    if (platform.angle + angle > 90)
        return platform;
    else
        return Platform(platform.angle + angle, platform.height);
}
// ���������� ����������� ��������� '++'
Platform& Platform::operator++()
{
    angle += 1;
    return *this;
}
// ���������� ������������ ��������� '++'
Platform Platform::operator++ (int)
{
    Platform m1 = *this;
    ++* this;
    return m1;
}
