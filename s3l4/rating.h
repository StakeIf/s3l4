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

    // Фун-ии получения данных из полей
    int GetPoints();

    // Деструктор
    ~Rating();

    // Инициализация структуры 
    void SetRating(int pointsi, Coin array[5]);

    // Вывод  на экран
    void DisplayRating();

    //Увеличить рейтинг
    void PlusRating();
};
