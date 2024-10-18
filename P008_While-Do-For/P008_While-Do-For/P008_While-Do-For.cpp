// P008_While-Do-For.cpp : By j0emike
//

#include <iostream>
#include <thread>
#include <chrono>


int main()
{
	using namespace std::chrono_literals;
    int contador = 0, op = 0;
	do
	{
	system("Color 1f");
	std::cout << "Yo puedo contar del 1 al 25" << std::endl;
	while (contador < 25)
	{
		std::cout << "Numero " << contador + 1 << std::endl;
		std::this_thread::sleep_for(.5s);
		contador++;
	}

	system("cls");
	system("Color 4f");
	std::cout << "Y yo del 25 al 1" << std::endl;
	do
	{
		std::cout << "Numero " << contador << std::endl;
		std::this_thread::sleep_for(.5s);
		contador--;
	} while (contador > 0);

	system("cls");
	system("Color 7f");
	std::cout << "Y yo de 5 en 5 al 25" << std::endl;
	for (int i = 0; i <= 25; i+=5)
	{
		std::cout << "Numero " << i << std::endl;
		std::this_thread::sleep_for(.5s);
	}

	system("Color 0f");
	std::cout << "Te gustaria volver a vernos hacerlo?" << std::endl;
	std::cout << "1. Si" << std::endl << "0. No" << std::endl;
	} while (op == 1);
}
