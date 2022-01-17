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
    this->points = 0;
    if (IsRightRating(points))
        this->points = points;

    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

Rating::Rating(int pointsi, Coin array[5])
{
    this->points = 0;
    if (IsRightRating(pointsi))
        this->points = pointsi;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
}

void Rating::SetPoint(int pointsi)
{
    this->points = 0;
    if (IsRightRating(pointsi))
        this->points = pointsi;
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

// Увеличение значения рейтинга на 1
void Rating::PlusRating() {
    points++;
    if (IsRightRating(points))
        this->points = points;
    else
        points--;
}

// Деструктор
Rating::~Rating()
{
    ;
}

// Проверка числа на подходящее
bool Rating::IsRightRating(int Rating)
{
    bool res = true;
    try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
    {
        if (Rating < 0 || Rating > 15)           // Если пользователь ввел неверное число, то выбрасывается исключение
            throw "Incorrect value.";       // выбрасывается исключение типа const char*
    }
    catch (const char* exception)           // обработчик исключений типа const char*
    {
        std::cerr << "Error: " << exception << '\n';
        res = false;
        return res;
    }

    return res;
}
