#include "coin.h"

// Конструктор
Coin::Coin()
{
    x = 0;
    y = 0;
}

// Фун-ии получения данных из полей
int Coin::GetX()
{
    return x;
}

int Coin::GetY()
{
    return y;
}

// Инициализация структуры 
void Coin::SetCoin(int xi, int yi)
{
    x = xi;
    y = yi;
}

// Ввод 
void Coin::InpCoinData()
{
    cout << "Введите x-координату шара: ";
    cin >> x;
    cout << "Введите y-координату шара: ";
    cin >> y;
}

// Вывод 
void Coin::DisplayCoin()
{
    cout << "Данные монеты: \n  x = " << x << "\n  y = " << y << endl;
}

//Случайные значение координат
void Coin::RandXYCoin() {
    x = rand() % 7;
    y = rand() % 7;
}

// Деструктор
Coin::~Coin()
{
    ;
}

// Дружественная функция обмена кординатами классов Ball и Coin
void KoordExchange(Ball& ball, Coin& coin)
{
    int x, y;
    x = ball.x;
    ball.x = coin.x;
    coin.x = x;
    y = ball.y;
    ball.y = coin.y;
    coin.y = y;
}
