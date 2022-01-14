#include "Ball.h"
#include "platform.h"
#include "Rating.h"
#include "Button.h"
#include "Coin.h"

#include <Windows.h>

Button* Button::lastButton = NULL;

int menu() {
	int i;
	system("cls");
	printf("  1) Ball\n  2) Platform\n  3) PlatformSquare*\n  4) Coin\n  5) Rating\n  6) Button\n  0) Output\n\n  Choose: ");
	scanf("%d", &i);
	return i;
}

int main() {
	system("chcp 1251");
	system("cls");

	Ball MyBall;
	Platform MyPlatform;
	Platform* PlatformSquare = new Platform;
	Coin MyCoin;
	Rating MyRating;
	Button MyButton;

	
	cout << "\nЛаба 8. Модифицировать проект путем добавления в один из классов \nкак минимум одного статического поля и одного статического метода:" << endl;

	// Формирование объектов класса Button:
	Button A(0);
	Button B(0);
	Button C(1);
	Button D(1);

	cout << ("\nВызов статической компанентной функции: 'Напечатать список'\n\n");
	// Вызов статической компанентной функции:
	Button::reprint();

	cout << ("\n\nДобавление элементов в список.\n\n");
	// Включение созданных компанентов в двусвязанный список:
	A.Add(); B.Add(); C.Add(); D.Add();

	cout << ("Вызов статической компанентной функции: \'Напечатать список\'\n\n");
	// Печать в обратном порядке значений элементов списка:
	Button::reprint();

	_getch();
	////////////

	

	int f = 1;
	int vib;
	do {
		switch (menu()) {
		case 0: //Выход
			f = 0;
			break;
		case 1: //Работа с шаром
			do {
				system("cls");
				printf("\n  1 - initiaz.\n  2 - input\n  3 - print data\n  4 - Step\n  0 - Output\n\n  Choose: ");
				scanf("%d", &vib);
				if (vib == 1)
					MyBall.SetBall(0, 0, "");
				if (vib == 2)
					MyBall.InpBallData();
				if (vib == 3)
					MyBall.DisplayBall();
				if (vib == 4)
					MyBall.MoveBall();
				printf("\nSuccessfully!");
				Sleep(1500);
			} while (vib != 0);
			break;
		case 2: //Работа с платформой
			do {
				system("cls");
				printf("\n  1 - initiaz.\n  2 - input\n  3 - print data\n  4 - Rotate\n  0 - Output\n\n  Choose: ");
				scanf("%d", &vib);
				if (vib == 1)
					MyPlatform.SetPlatform(5, 50);
				if (vib == 2)
					MyPlatform.InpPlatformData();
				if (vib == 3)
					MyPlatform.DisplayPlatform();
				if (vib == 4)
					MyPlatform.RandRotatePlatform();
				printf("\nSuccessfully!");
				Sleep(1500);
			} while (vib != 0);
			break;
		case 3: //Работа с платформой
			do {
				system("cls");
				printf("\n  1 - initiaz.\n  2 - input\n  3 - print data\n  4 - Rotate\n  0 - Output\n\n  Choose: ");
				scanf("%d", &vib);
				if (vib == 1)
					PlatformSquare->SetPlatform(5, 50);
				if (vib == 2)
					PlatformSquare->InpPlatformData();
				if (vib == 3)
					(*PlatformSquare).DisplayPlatform();
				if (vib == 4)
					PlatformSquare->RandRotatePlatform();
				printf("\nSuccessfully!");
				Sleep(1500);
			} while (vib != 0);
			break;
		case 4: //Работа с монеткой
			do {
				system("cls");
				printf("\n  1 - initiaz.\n  2 - input\n  3 - print data\n  4 - Rand coord\n  0 - Output\n\n  Choose: ");
				scanf("%d", &vib);
				if (vib == 1)
					MyCoin.SetCoin(1, 1);
				if (vib == 2)
					MyCoin.InpCoinData();
				if (vib == 3) {
					MyCoin.DisplayCoin();
				}
				if (vib == 4)
					MyCoin.RandXYCoin();
				printf("\nSuccessfully!");
				Sleep(1500);
			} while (vib != 0);
			break;
		case 5: //Работа с рейтингом
			do {
				system("cls");
				printf("\n  1 - initiaz.\n  2 - print rating\n  3 - Plus\n  0 - Output\n\n  Choose: ");
				scanf("%d", &vib);
				while (getchar() != '\n');
				if (vib == 1) {
					Coin mas[5];
					for (int i = 0; i < 5; i++)
						mas[i].RandXYCoin();
					MyRating.SetRating(0, mas);
				}
				if (vib == 2) {
					MyRating.DisplayRating();
					_getch();
				}
				if (vib == 3)
					MyRating.PlusRating();
				printf("\nSuccessfully!");
				Sleep(1000);
			} while (vib != 0);
			break;
		case 6: //Работа с кнопкой
			do {
				system("cls");
				printf("\n  1 - initiaz.\n  2 - Button state\n  3 - Press\n  0 - Output\n\n  Choose: ");
				scanf("%d", &vib);
				if (vib == 1)
					MyButton.SetButton(0);
				if (vib == 2)
					MyButton.DisplayButton();
				if (vib == 3)
					MyButton.PressButton();
				printf("\nSuccessfully!");
				Sleep(1500);
			} while (vib != 0);
			break;
		}
	} while (f);
	delete PlatformSquare;
}
