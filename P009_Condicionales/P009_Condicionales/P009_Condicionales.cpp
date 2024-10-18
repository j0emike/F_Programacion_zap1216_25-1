// P009_Condicionales.cpp : by j0emike
/*Case 1: Suma
Case 2: Resta
Case 3: Multi
Case 4: Div
Case 5: Valor Absoluto
Case 6: Mayor y menor que*/

#include <iostream>

int main()
{
    int op = 0, n1 = 0, n2 = 0;
	do
	{
		std::cout << "-----Supercalculadora-----" << std::endl;
		std::cout << "1. Suma" << std::endl;
		std::cout << "2. Resta" << std::endl;
		std::cout << "3. Multiplicacion" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Valor absoluto" << std::endl;
		std::cout << "6. Mayor y menor que" << std::endl;
		std::cin >> op;
		switch (op)
		{
		case 1:
			std::cout << "Dame 2 numeros" << std::endl;
			std::cout << "Numero 1" << std::endl;
			std::cin >> n1;
			std::cout << "Numero 2" << std::endl;
			std::cin >> n2;
			std::cout << "Su suma es " << n1 + n2 << std::endl;
		case 2:
			std::cout << "Dame 2 numeros" << std::endl;
			std::cout << "Numero 1" << std::endl;
			std::cin >> n1;
			std::cout << "Numero 2" << std::endl;
			std::cin >> n2;
			std::cout << "Su resta es " << n1 - n2 << std::endl;
		case 3:
			std::cout << "Dame 2 numeros" << std::endl;
			std::cout << "Numero 1" << std::endl;
			std::cin >> n1;
			std::cout << "Numero 2" << std::endl;
			std::cin >> n2;
			std::cout << "Su multiplicacion es " << n1 * n2 << std::endl;
		case 4:
			std::cout << "Dame 2 numeros" << std::endl;
			std::cout << "Numero 1" << std::endl;
			std::cin >> n1;
			std::cout << "Numero 2" << std::endl;
			std::cin >> n2;
			std::cout << "Su division es " << n1 / n2 << std::endl;
		case 5:
			std::cout << "Dame 2 numeros" << std::endl;
			std::cout << "Numero 1" << std::endl;
			std::cin >> n1;
			std::cout << "Numero 2" << std::endl;
			std::cin >> n2;
			std::cout << "Su resta es " << n1 - n2 << std::endl;
		default:
			break;
		}
	} while (op != 0);
}
