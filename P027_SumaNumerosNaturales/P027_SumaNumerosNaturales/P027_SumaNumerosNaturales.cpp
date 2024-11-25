// P027_SumaNumerosNaturales.cpp : by j0emike
//

#include <iostream>

int sumaNaturales(int suma){
    int resultado;
    if (suma == 0) {
        resultado = 0;
    }
    else {
        resultado = suma + sumaNaturales(suma - 1); 
    }
    return resultado;
}

int main()
{
    int suma;
    std::cout << "Dame un numero y te dare la suma de todos sus naturales anteriores \n";
    std::cin >> suma;
    std::cout << sumaNaturales(suma);
}

