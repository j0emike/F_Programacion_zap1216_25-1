// P024_Palindromo.cpp : by j0emike

#include <iostream>
#include <string>

bool palindromo(std::string palabra){
    int ultimo = palabra.length() - 1;
	if (palabra[0] != palabra[ultimo])
	{
		return false;
	}
	if (palabra.length() < 2)
	{
		return true;
	}

	std::string comparador = palabra.substr(1, ultimo - 1);
	if (palindromo(comparador))
	{
		return true;
	}
	return false;
}

int main()
{
	std::string palindroma;
	std::cout << "Dame una palabra y te dire si es palindroma." << std::endl;
	getline(std::cin,palindroma);
	if (palindromo(palindroma) == true) {
		std::cout << "Tu palabra es palindroma." << std::endl;
	}
	else
	{
		std::cout << "Tu palabra no es palindroma." << std::endl;
	}

}

