// P012_Bucles.cpp : by j0emike
//

#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	using namespace std::chrono_literals;
    int vidas = 3, intento = 1;
	do
	{
		std::cout << "Hola, soy un programa asesino, te quitare lentamente la vida" << std::endl;
		for (int i = 3; i > 0; i--)
		{
			std::cout << "Puaj, te queda " << i << " de vida." << std::endl;
		}
		std::cout << "Quieres volver a ver como te destripo?" << std::endl;
		std::cout << "0. No    1. Si" << std::endl;
		std::cin >> intento;
	} while (intento != 0);
	std::cout << "De acuerdo, pues contare al 100 mientras te desangras" << std::endl;
	for (int i = 0; i <= 100; i++)
	{
		std::cout << "Numero " << i << std::endl;
		std::this_thread::sleep_for(.5s);
	}
}
