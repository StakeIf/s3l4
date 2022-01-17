#pragma once

#include "Coin.h"

class Rating
{
private:
    int points;
    Coin ArrayCoins[5];

public:
    // Конструктор
    Rating();
    Rating(int points);
    Rating(int pointsi, Coin array[5]);

    // Фун-ии получения данных из полей
    int GetPoints();

    // Деструктор
    ~Rating();

    void SetPoint(int pointsi);
    void SetCoinArray(Coin array[5]);

    // Вывод  на экран
    void DisplayRating();

    //Увеличить рейтинг
    void PlusRating();

    // Проверка числа на подходящее для Рейтинга
    bool IsRightRating(int Rating);
};
