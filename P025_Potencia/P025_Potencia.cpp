// P025_Potencia.cpp : by j0emike

#include <iostream>
int potenciaNumeros(int base, int exponente) {
    if (exponente == 0)
        return 1;
    else
    {
        return base * potenciaNumeros(base, exponente-1);
    }
}

int main()
{
    int n1, n2;
    std::cout << "Dame dos numeros, uno sera la base y el segundo su potencia \n";
    std::cout << "Dime el primer numero: " << std::endl;
    std::cin >> n1;
    std::cout << "Dime el segundo numero: " << std::endl;
    std::cin >> n2;
    std::cout << potenciaNumeros(n1, n2);
}