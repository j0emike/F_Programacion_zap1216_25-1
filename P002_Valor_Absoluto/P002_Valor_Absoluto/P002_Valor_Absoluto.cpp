// P002_Valor_Absoluto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Buen dia, dame un numero y te dare su valor absoluto: " << std::endl;
    std::cin >> num;
    if (num >= 0)
    {
        std::cout << "Su valor abosuluto es " << num << std::endl;
    }
    else
    {
        std::cout << "Su valor absoluto es " << num * -1 << std::endl;
    }
}

