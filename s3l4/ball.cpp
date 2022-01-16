#include "Ball.h"

// ������������
Ball::Ball()
{
    x = 0;
    y = 0;
    Name = "";
}

Ball::Ball(string name)
{
    x = 0;
    y = 0;
    this->Name = name;
}

Ball::Ball(int x, int y, string name)
{
    this->x = x;
    this->y = y;
    this->Name = name;
}
//����������� ��������
void Ball::SetX(int x) 
{
    this->x = x;
}

void Ball::SetY(int y)
{
    this->y = y;
}

void Ball::SetName(string name)
{
    this->Name = name;
}

// ���-�� ��������� ������ �� �����
void Ball::GetX(int* xi)
{
    *xi = x;
}

void Ball::GetY(int* yi)
{
    *yi = y;
}

void Ball::GetNameLink(string& name)
{
    name = this->Name;
}

// ���� 
void Ball::InpBallData()
{
    cout << "������� x-���������� ����: ";
    cin >> x;
    cout << "������� y-���������� ����: ";
    cin >> y;
    cout << "������� ��� ����: ";
    cin >> Name;

}

// ����� 
void Ball::DisplayBall()
{
    cout << "������ ����: \n  x = " << x << "\n  y = " << y << "\n  Name -  " << Name << endl;

}

void Ball::MoveBall() {
    cout << "Press \n  'D' to increase the x value \n  'A' to decrease the x value\n  'W' to increase the y value\n  'S' to decrease the y value\n" << endl;
    char key = _getch();
    if (key == 'a')
        x--;
    if (key == 'd')
        x++;
    if (key == 'w')
        y++;
    if (key == 's')
        y--;
}

// ����������
Ball::~Ball()
{
    ;
}


