#include "Ball.h"
#include "platform.h"
#include "Rating.h"
#include "Button.h"
#include "Coin.h"

#include "Coord.h"

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

	Ball ball1(1,2, "Три");
	ball1.Inp();
	cout << endl;
	ball1.DisplayBall();

	/*
	cout << "Лабораторная 12\n" << endl;
	Ball Ball1(1, 2, "Pop");
	Coord Coord1(3,4);

	cout << "3) Продемонстрировать перегрузку метода \nбазового класса в производном классе\n(с вызовом метода базового класса и без такого вызова)\n" << endl;
	Coord1.Display();
	Ball1.DisplayBall();
	cout << endl;
	Coord1.MyLocation();
	Ball1.MyLocation();
	
	////

	Ball ball2(1, 1, "one");
	ball2.DisplayBall();

	////

	Ball Ball1(1, 2, "Pop");
	Coord Coord1(3, 4);

	cout << "5) Выполнить перегрузку оператора присваивания объекту\nпроизводного класса объектов базового класса\n" << endl;

	Coord1.Display();
	Ball1.DisplayBall();

	Ball1 = Coord1;

	Coord1.Display();
	Ball1.DisplayBall();

	/// <summary>
	

	Ball yourBall(2, 2, "Two");
	cout << "6) Заменить методы Display используя операции << для C++" << endl;
	cout << yourBall << endl;
	*/

	/*
	Ball Ball1(1, 2, "Pop");
	Coord Coord1(3, 4);

	cout << "7) Придумать разумное использование виртуальных функций и создать их в вашем проекте." << endl << endl;
	Coord1.Display();
	Ball1.DisplayBall();
	cout << endl;
	Coord1.MyLocation();
	Ball1.MyLocation();

	Coord point(1,1);
	Ball myach(2,3, "Четыре");
	Coord* ppoint = &myach;
	Ball* pmyach = &myach;
	Coord* ppoint2 = &point;

	cout << endl;
	cout << "Объект класса Ball" << endl;
	myach.DisplayBall();
	cout << endl;
	cout << "Указатель класса Coord на класс Ball" << endl;
	ppoint->Display();
	cout << endl;
	cout << "Указатель класса Coord на класс Ball" << endl;
	ppoint2->Display();
	cout << endl;
	cout << "Вызов виртуальной функции через не виртуальную базового класса" << endl;
	cout << "от объекта класса Ball" << endl;
	myach.MyLocation();
	cout << endl;
	cout << "Вызов виртуальной функции через не виртуальную базового класса" << endl;
	cout << "от объекта класса Coord" << endl;
	point.MyLocation();
	cout << endl;
	cout << "от указателя Coord на объект класса Ball" << endl;
	cout << ppoint->Who() << endl;
	cout << endl;
	cout << "от указателя Coord на объект класса Coord" << endl;
	cout << ppoint2->Who() << endl;
	cout << endl;
	cout << "от указателя Ball на объект класса Ball" << endl;
	cout << pmyach->Who() << endl;


	/*
	cout << "Лабораторная 10\n" << endl;
	cout << "Значение в отрезке [0;15]\n" << endl;
	Rating rat1(-5);
	cout << "Текущее значение: " << rat1.GetPoints() << endl;

	rat1.SetPoint(16);
	cout << "Текущее значение: " << rat1.GetPoints() << endl;

	rat1.SetPoint(14);
	cout << "Текущее значение: " << rat1.GetPoints() << endl;

	rat1.PlusRating();
	cout << "Текущее значение: " << rat1.GetPoints() << endl;

	rat1.PlusRating();
	cout << "Текущее значение: " << rat1.GetPoints() << endl;

	/*
	Ball MyBall;
	Platform MyPlatform;
	Platform* PlatformSquare = new Platform;
	Coin MyCoin;
	Rating MyRating;
	Button MyButton;

	/*Coin masCoin[5];
	for (int i = 0; i < 5; i++)
		masCoin[i].RandXYCoin();

	cout << "Лабораторная 11" << endl;
	Coin Coin1[3], Coin2[2][2];

	// Присваивание
	Coin1[0].SetCoin(3,3);
	Coin1[1].SetCoin(4, 4);
	Coin1[2].SetCoin(5, 5);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			Coin2[i][j].SetCoin(j,j+2);

	// Вывод
	cout << "Одномерный массив размером [3]" << endl;
	for (int i = 0; i < 3; i++)
		Coin1[i].DisplayCoin();

	cout << endl;
	cout << "Двумерный массив размером [2][2]" << endl;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			Coin2[i][j].DisplayCoin();

	/*
	cout << "Лабораторная 9" << endl;
	cout << "МЯЧ: \n" << endl;
	Ball Ball1;
	Ball Ball2("Param");
	Ball Ball3(1, 1, "One");

	Ball* Ball4 = new Ball();
	Ball* Ball5 = new Ball("Круглый");
	Ball* Ball6 = new Ball(2, 2, "Два");

	cout << "Статические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Ball1.DisplayBall();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Ball2.DisplayBall();
	cout << "3) Конструктор с параметрами:" << endl;
	Ball3.DisplayBall();
	cout << "" << endl;
	cout << "Динамические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Ball4->DisplayBall();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Ball5->DisplayBall();
	cout << "3) Конструктор с параметрами:" << endl;
	Ball6->DisplayBall();
	cout << "\n\n" << endl;

	/////////////

	Platform Platform1;
	Platform Platform2(35);
	Platform Platform3(12, 12);

	Platform* Platform4 = new Platform();
	Platform* Platform5 = new Platform(45);
	Platform* Platform6 = new Platform(30, 30);

	cout << "ПЛАТФОРМА: \n" << endl;
	cout << "Статические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Platform1.DisplayPlatform();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Platform2.DisplayPlatform();
	cout << "3) Конструктор с параметрами:" << endl;
	Platform3.DisplayPlatform();
	cout << "" << endl;
	cout << "Динамические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Platform4->DisplayPlatform();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Platform5->DisplayPlatform();
	cout << "3) Конструктор с параметрами:" << endl;
	Platform6->DisplayPlatform();
	cout << "\n\n" << endl;

	////////////	
	cout << "МОНЕТА: \n" << endl;
	Coin Coin1;
	Coin Coin2(33);
	Coin Coin3(23, 21);

	Coin* Coin4 = new Coin();
	Coin* Coin5 = new Coin(1);
	Coin* Coin6 = new Coin(2, 2);

	cout << "Статические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Coin1.DisplayCoin();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Coin2.DisplayCoin();
	cout << "3) Конструктор с параметрами:" << endl;
	Coin3.DisplayCoin();
	cout << "" << endl;
	cout << "Динамические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Coin4->DisplayCoin();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Coin5->DisplayCoin();
	cout << "3) Конструктор с параметрами:" << endl;
	Coin6->DisplayCoin();
	cout << "\n\n" << endl;

	////////////	
	cout << "РЕЙТИНГ: \n" << endl;
	Rating Rating1;
	Rating Rating2(10);
	Rating Rating3(10, masCoin);

	Rating* Rating4 = new Rating();
	Rating* Rating5 = new Rating(1);
	Rating* Rating6 = new Rating(2, masCoin);

	cout << "Статические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Rating1.DisplayRating();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Rating2.DisplayRating();
	cout << "3) Конструктор с параметрами:" << endl;
	Rating3.DisplayRating();
	cout << "" << endl;
	cout << "Динамические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Rating4->DisplayRating();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Rating5->DisplayRating();
	cout << "3) Конструктор с параметрами:" << endl;
	Rating6->DisplayRating();
	cout << "\n\n" << endl;

	////////////	
	cout << "КНОПКА: \n" << endl;

	Button Button1;
	Button Button2(1);

	Button* Button4 = new Button();
	Button* Button5 = new Button(1);

	cout << "Статические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Button1.DisplayButton();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Button2.DisplayButton();
	
	cout << "" << endl;
	cout << "Динамические объекты:" << endl;
	cout << "1) Конструктор без параметров:" << endl;
	Button4->DisplayButton();
	cout << "2) Конструктор с 1-им параметром:" << endl;
	Button5->DisplayButton();
	
	cout << "\n\n" << endl;

	/////////////

	



	/*
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
	*/
}
