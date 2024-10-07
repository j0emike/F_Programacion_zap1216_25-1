// P003_Mayor_que_Menor_que.cpp by Jose Peña
//

#include <string>
#include <iostream>


int main()
{
	std::cout << "Dame dos numeros y te dire cual es mayor y cual es menor: " << std::endl;
	float n1 = 0, n2 = 0;
	std::cout << "Dime el primer numero: ";
	std::cin >> n1;
	std::cout << "Dime el segundo numero: ";
	std::cin >> n2;
	if (n1 > n2)
	{
		std::cout << "El numero " << n1 << " es mayor a el numero " << n2;
	}
	else if (n1 < n2)
	{
		std::cout << "El numero " << n2 << " es mayor a el numero " << n1;
	}
	else
	{
		std::cout << "Ambos numeros son iguales.";
	}
}

