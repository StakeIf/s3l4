#include "button.h"

// Конструктор
Button::Button()
{
    OnOff = 0;
}

// Конструктор
Button::Button(bool OnOff)
{
    this->OnOff = OnOff;
}

//Получение значения 
void Button::SetButton(bool onoffi)
{
    this->OnOff = onoffi;
}

// Фун-ии получения данных из полей
int Button::GetOnOff()
{
    return OnOff;
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

// Добавление элемента в конец списка
void Button::Add(void)
{
    if (lastButton == NULL)
        this->prev = NULL;
    else
    {
        lastButton->next = this;
        prev = lastButton;
    }
    lastButton = this;
    this->next = NULL;
}

// Вывод на дисплей содержимого списка
void Button::reprint(void)
{
    Button* uk;   // Вспомогательный указатель
    uk = lastButton;
    if (uk == NULL)
    {
        cout << "Список пуст!";
        return;
    }
    else
        cout << "\nСодержимое списка:\n";

    // Цикл печати в обратном порядке значений элементов списка:
    while (uk != NULL)
    {
        cout << uk->OnOff << '\t';
        uk = uk->prev;
    }
}

