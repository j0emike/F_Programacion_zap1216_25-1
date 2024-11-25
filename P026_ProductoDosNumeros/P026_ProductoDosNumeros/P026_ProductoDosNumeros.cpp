// P026_ProductoDosNumeros.cpp : by j0emike
//

#include <iostream>

void productoNumeros(int n1, int n2) {
    std::cout << "Tu resultado es: " << n1 * n2;
}

int main()
{
    int n1, n2;
    std::cout << "Dame dos numeros y te dare su producto \n";
    std::cout << "Dime el primer numero: " << std::endl;
    std::cin >> n1;
    std::cout << "Dime el segundo numero: " << std::endl;
    std::cin >> n2;
    productoNumeros(n1,n2);
}