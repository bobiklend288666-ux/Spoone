//#include <iostream>
//#include <windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//	double num1, num2, result;
//	char operation;
//	std::cout << "Введите первое число: ";
//	std::cin >> num1;
//	std::cout << "Введите второе число: ";
//	std::cin >> num2;
//	std::cout << "Введите операцию: ( +, -, *, / ): ";
//	std::cin >> operation;
//
//	if (operation == '+') {
//		result = num1 + num2;
//	}
//	else if (operation == '-') {
//		result = num1 - num2;
//	}
//	else if (operation == '*') {
//		result = num1 * num2;
//	}
//	else if (operation == '/') {
//		if (num2 != 0) {
//			result = num1 / num2;
//		}
//		else {
//			std::cout << "Ошибка! Делить на ноль нельзя." << endl;
//			return 1;
//		}
//	}
//	else {
//		std::cout << "Ошибка! Неверный оператор." << endl;
//		return 0;
//	}
//}
//#include <iostream>
//#include <windows.h>
//int main()
//{
	//SetConsoleCP(CP_UTF8);
	//SetConsoleOutputCP(CP_UTF8);
	//double a = 0, b = 0, c = 0;
	//std::cout << "Решение полного квадратного уравнения\n\n";
	//std::cout << "ax^2 + bx + c = 0 \n\n";
	//std::cout << "Введите A: ";
	//std::cin >> a;
	//std::cout << "Введите B: ";
	//std::cin >> b;
	//std::cout << "Введите C: ";
	//std::cin >> c;
//
//
	//return 0;
//}
/*#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
		int i = 0;
	while (i)
	{
	return 0;
}*/
//#include <iostream>
//#include <windows.h>
//
//int main() 
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//	int num = 0;
//	int sum = 0;
//	while (true)
//	{
//		std::cout << "Введите число: ";
//		std::cin >> num;
//			if (num == 0);
//		{
//			break;
//		}
//		sum += num;
//	}
//	std::cout << "Сумма чисел равна: " << sum  << "/n";
//}
//#include <iostream>
//#include <windows.h>
//
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//	int a = 0;
//
//	do
//	{
//
//
//
//
//
//	} while (true); 
//
//
//
//
//
//	return 0;
//}
//#include <iostream>
//#include <windows.h>
//int choice;
//bool running = true;
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//	do
//	{
//		std::cout << "--->Меню<---\t\n";
//		std::cout << "1 - Ларионов\n";
//		std::cout << "2 - Александрович\n";
//		std::cout << "3 - Дмитриевич\n";
//		std::cout << "4-->Выберете нужный пункт<--";
//		std::cin >> choice; 
//
//
//		if (choice == 1) {
//			std::cout << "Ларионов\n";
//		}
//		else if (choice == 2) {
//			std::cout << "Александрович\n";
//		}
//		else if (choice == 3) {
//			std::cout << "Дмитриевич\n";
//		}
//		else {
//			std::cout << "Ошибка выберете 1-3 пункт\n";
//		}
//	}while (true);
//	return 0;
//}




//#include <iostream>
//#include <windows.h>
//
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//	int a = 5;
//
//	for (size_t i = 0; i < a; i++)
//	{
//		std::cout << "Hello " << i;
//
//	}
//
//
//	int a = 0;
//	while (a < 5)
//	{
//		std::cout << "Hello " << a;
//		a++;
//	}
//	return 0;
//}

//#include <iostream>
//#include <windows.h>
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);

	//int choose = 0, number = 0, hp = 0, randomNumber = 0;
	//int maxHp = 25, maxHpHard = 25;

	//while (true)
	//{
	//	system("cls");
	//	std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
	//	std::cout << "1 - Начать игру\n";
	//	std::cout << "2 - Настройки\n";
	//	std::cout << "3 - Выход";
	//	std::cout << "\nВвод: ";
	//	std::cin >> choose;

	//	if (choose == 1)
	//	{
	//		while (true)
	//		{
	//			system("cls");
	//			std::cout << "\n\n\n\ Выберете уровень сложности\"\n\n\n";
	//			std::cout << "1 - Лёгкий (1-500)\n";
	//			std::cout << "2 - Сложный (1-5000)";
	//			std::cout << "\n0 - Выход в главное меню";
	//			std::cout << "\nВвод: ";
	//			std::cin >> choose;

	//			if (choose == 1)
	//			{
	//				randomNumber = rand() % 500 + 1;
	//				hp = maxHp;

	//				while (true)
	//				{

	//					std::cout << "Кол-во жизней: " << hp << "\n";
	//					std::cout << "Введите число от 1 до 500: ";
	//					std::cin >> number;

	//					if (number == randomNumber)
	//					{
	//						std::cout << "\nВы угадали! Поздравляем!\n";
	//						system("pause");
	//						break;
	//					}
	//					else if (number < 1 || number >500)
	//					{
	//						std::cout << "Вы вышли за диапазон!\n";
	//						Sleep(1200);
	//					}
	//					else
	//					{
	//						hp--;
	//						if (hp <= 0)
	//						{
	//							std::cout << "Вы проиграли!\n";
	//							std::cout << "Загаданное число было: " << randomNumber << "\n";
	//							system("pause");
	//							break;
	//						}
	//						if (number < randomNumber)
	//						{
	//							std::cout << "Ваше число меньше загаданного числа\n";
	//						}
	//						else
	//						{
	//							std::cout << "ваше число больше загаданного числа\n";
	//						}
	//					}
	//			else if
	//			{
	//				std::cout << "Отказ от подсказки\n";
	//				Sleep(500);
	//			}
	//				}
	//			}
	//		}
	//	}
	//}
//	return 0;
//}
//#include <iostream>
//#include <windows.h>
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//	srand(time(NULL));
//
//	const int row = 3, col = 4;
//
//	int arr[row][col]{};
//
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t l = 0; l < col; l++)
//		{
//			arr[i][l] = rand() % 21 - 10;
//			std::cout << arr[i][l] << " ";
//		}
//		std::cout << "\n";
//
//	}
//	return 0;
//}




/*
	тип_возврата Имя_Функция(аргументы_функция, ...)
	{
		тело_функции
	}

	*/

//void PrintNum (int a)
//{
//	std::cout << a << "\n";
//}
//void PrintNum(int a, double b)
//{
//	a += b;
//	std::cout << a + b << "\n";
//}
//int Sum(int a, int b)
//{
//	return a + b;
//}

//#include <iostream>
//#include <windows.h>

//int Sum(int a, int b) // Сложение
//{
//	return a + b;
//}
//
//int Min(int a, int b) // Вычитание
//{
//	return a - b;
//}
//
//int Um(int a, int b) // Умножение
//{
//	return a * b;
//}
//
//int Del(int a, int b) // Деление
//{
//	return a / b;
//}
//
//int main() 
//{
//	SetConsoleCP (CP_UTF8);
//	SetConsoleOutputCP (CP_UTF8);
//	int nomer1 = 0;
//	int operatorkal;
//	int nomer2 = 0;
//
//	while (true) 
//	{
//		std::cout << "\n----Калькулятор----\n";
//		std::cout << "Выберете первое число: \n";
//		std::cin >> nomer1;
//		std::cout << "Введите что сделать с числами: \n1) + \n2) - \n3) * \n4) / \n";
//		std::cin >> operatorkal;
//		std::cout << "Введите второе число: \n";
//		std::cin >> nomer2;
//		if (operatorkal == 1)
//		{
//			std::cout << "\nРезультат: " << Sum(nomer1 , nomer2);
//		}
//		if (operatorkal == 2)
//		{
//			std::cout << "Результат: " << Min(nomer1, nomer2);
//		}
//		if (operatorkal == 3)
//		{
//			std::cout << "Результат: " << Um(nomer1, nomer2);
//		}
//		if (operatorkal == 4)
//		{
//			std::cout << "Результат: " << Del(nomer1, nomer2);
//		}
//	}	
//	return 0;
//}








//#include <iostream>
//#include <windows.h>
//
//void FillArray(int arr[], int row)
//{
//	for (size_t i = 0; i < row; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void FillArray(double arr[], int row)
//{
//	for (size_t i = 0; i < row; i++)
//	{
//		arr[i] =(rand() % 20 + 1) + (double)(rand()% 9 + 1) /10;
//	}
//}
//void FillArray(char arr[], int row)
//{
//	for (size_t i = 0; i < row; i++)
//	{
//		arr[i] = 'a' + rand() % 26;
//	}
//}
//
//
//void ShowArray(int arr[], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		std::cout << arr[i] << ", ";
//	}
//	std::cout << "\n";
//}
//void ShowArray(char arr[], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		std::cout << arr[i] << ", ";
//	}
//	std::cout << "\n";
//}
//void ShowArray(double arr[], int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		std::cout << arr[i] << ", ";
//	}
//	std::cout << "\n";
//}
//int Fak(int num)
//{
//	if (num<0)
//	{
//		return 0;
//	}
//	if (num == 0)
//	{
//		return 1;
//	}
//	return num * Fak(num - 1);
//}
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP (CP_UTF8);
//
//	const int row = 4;
//	int arr1[row];
//	double arr2[row];
//	char arr3[row];
//
//	FillArray(arr1, row);
//	FillArray(arr2, row);
//	FillArray(arr3, row);
//
//	std::cout << "Массив int: ";
//	ShowArray(arr1, row);
//	std::cout << "Массив double: ";
//	ShowArray(arr2, row);
//	std::cout << "Массив char: ";
//	ShowArray(arr3, row);
//
//
//
//	return 0;
//}


#include <iostream>
#include <windows.h>
int Fak(int num,int num1)
{
	if (num1 == 0)
	{
		return 0;
	}
	return num + Fak(num, num1 - 1);
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP (CP_UTF8);

	Fak(12, 43);

	return 0;
}