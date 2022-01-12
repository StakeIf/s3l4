#include "Rating.h"

// Конструктор
Rating::Rating()
{
    points = 0;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

// Фун-ии получения данных из полей
int Rating::GetPoints()
{
    return points;
}

// Инициализация структуры 
void Rating::SetRating(int pointsi, Coin array[5])
{
    points = pointsi;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
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
