#include "Rating.h"

// Конструктор
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

// Фун-ии получения данных из полей
int Rating::GetPoints()
{
    return points;
}

// Вывод 
void Rating::DisplayRating()
{
    cout << "Рейтинг = " << points << endl;
    cout << "Монеты: \n" << endl;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i].DisplayCoin();

}

void Rating::PlusRating() {
    points++;
}

// Деструктор
Rating::~Rating()
{
    ;
}

