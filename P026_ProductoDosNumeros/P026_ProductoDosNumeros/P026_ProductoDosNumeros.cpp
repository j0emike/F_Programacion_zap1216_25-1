// P026_ProductoDosNumeros.cpp : by j0emike
//

#include <iostream>
int productoNumeros(int n1, int n2) {
    if (n1 == 0 or n2 == 0)
        return 0;
    else
    {
        return n1 + productoNumeros(n1, n2 - 1);
    }
}

int main()
{
    int n1, n2;
    std::cout << "Dame dos numeros y te dare su producto \n";
    std::cout << "Dime el primer numero: " << std::endl;
    std::cin >> n1;
    std::cout << "Dime el segundo numero: " << std::endl;
    std::cin >> n2;
    std::cout << productoNumeros(n1,n2);
}