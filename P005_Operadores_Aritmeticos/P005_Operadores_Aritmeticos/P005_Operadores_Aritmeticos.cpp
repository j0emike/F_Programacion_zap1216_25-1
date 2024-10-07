// P005_Operadores_Aritmeticos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    float n1, n2;
    std::cout << "Yo puedo calcular muchas cosas, que tal si me das 2 numeros y probamos." << std::endl;
    std::cout << "Numero 1: " << std::endl;
    std::cin >> n1;
    std::cout << "Numero 2: " << std::endl;
    std::cin >> n2;
    std::cout << "Su suma seria: " << n1 + n2 << std::endl;
    std::cout << "Su resta seria: " << n1 - n2 << std::endl;
    std::cout << "Su multiplicacion seria " << n1 * n2 << std::endl;
    std::cout << "Su division seria: " << n1 / n2 << std::endl;
    std::cout << "La raiz cuadrada de " << n1 << " seria " << sqrt(n1) << std::endl;
    std::cout << "La raiz cuadrada de " << n2 << " seria " << sqrt(n2) << std::endl;
    std::cout << "Si elevamos al cuadrado " << n1 << " seria " << pow(n1, 2) << std::endl;
    std::cout << "Si elevamos al cuadrado " << n2 << " seria " << pow(n2, 2) << std::endl;
}

