#include "Rating.h"

// �����������
Rating::Rating()
{
    points = 0;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

Rating::Rating(int points)
{
    this->points = points;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

Rating::Rating(int pointsi, Coin array[5])
{
    points = pointsi;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
}

void Rating::SetPoint(int pointsi)
{
    points = pointsi;
}

void Rating::SetCoinArray(Coin array[5])
{
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
}

// ���-�� ��������� ������ �� �����
int Rating::GetPoints()
{
    return points;
}

// ����� 
void Rating::DisplayRating()
{
    cout << "������� = " << points << endl;
    cout << "������: \n" << endl;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i].DisplayCoin();

}

void Rating::PlusRating() {
    points++;
}

// ����������
Rating::~Rating()
{
    ;
}

