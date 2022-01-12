#include "button.h"

// Конструктор
Button::Button()
{
    OnOff = 0;
}

// Фун-ии получения данных из полей
int Button::GetOnOff()
{
    return OnOff;
}

// Инициализация структуры 
void Button::SetButton(bool onoffi)
{
    OnOff = onoffi;
}

// Вывод 
void Button::DisplayButton()
{
    if (OnOff)
        cout << "Кнопка нажата " << endl;
    else
        cout << "Кнопка НЕ нажата " << endl;
}

void Button::PressButton() {
    if (OnOff)
        OnOff = 0;
    else
        OnOff = 1;
}

// Деструктор
Button::~Button()
{
    ;
}
