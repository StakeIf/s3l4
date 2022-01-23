#include "coin.h"

// Конструктор
Coin::Coin()
{
    x = 0;
    y = 0;
}

Coin::Coin(int x)
{
    this->x = x;
    y = 0;
}

Coin::Coin(int x, int y)
{
    this->x = x;
    this->y = y;
}

/*
void Coin::SetX(int x) {
    this->x = x;
}
void Coin::SetY(int y) {
    this->y = y;
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
// Ввод
void Coin::InpCoinData()
{
    cout << "Введите x-координату шара: ";
    cin >> x;
    cout << "Введите y-координату шара: ";
    cin >> y;
}
*/

void Coin::SetCoin(int x, int y) {
    this->x = x;
    this->y = y;
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

string Coin::Who()
{
    return "Монета ";
}

