// P022_Decimal_a_Binario.cpp : by j0emike
//

#include <iostream>

void convertorBinarioDecimal(int numero) {
    if (numero > 1) {
        convertorBinarioDecimal(numero / 2);
    }
    std::cout << numero % 2;
}

int main()
{
    int numero;
    std::cout << "Dame un numero decimal y te dare su conversion a binario." << std::endl;
    std::cin >> numero;
    convertorBinarioDecimal(numero);
}
