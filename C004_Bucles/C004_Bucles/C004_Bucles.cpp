// C004_Bucles.cpp 
// Para que sirve un bucle? 
// Repetir - Contar - Cobrar
// While - Di while - For

#include <iostream>
#include <cstdlib>

int main()
{
    //Syntaxis 1.- While
    int contador = 0;
    // Declaracion de funcion while
    // Mientras el contador sea menor o igual a 100.
    while (contador <= 100)
    {
        contador++; // Aumento del contador en 1.
        //Contador = contador + 2; Aumento del contador de 2 en 2.
        std::cout << "El contador va en: " << std::endl;
    }
    //Syntaxis 2.- Do while
    // Siempre se ejecuta por lo menos 1 vez.
    do
    {
        contador--;
        std::cout << "El contador DO WHILE va en: " << contador << std::endl;
    } while (contador >= 0);
    //Syntaxis 3.- For
    // La estructura de control mas segura
    // en su declaracion colocamos el inicio y el final.
    for (int i = 5; i > 0; i--)
    {
        std::cout << "Esto se ejecutara hasta que pierdas tus " << i << " vidas... " << std::endl;
        std::cout << "Presiona una tecla." << std::endl;
        std::cout << "Jaja perdiste una vida. Vuelve a intentarlo :p" << std::endl;
        system("Color 1f");
        system("pause");
        system("cls");
    }
    /*Codigo
        Color
0    Negro
1    Azul
2    Verde
3    Celeste cielo
4    Rojo
5    Morado
6    Amarillo
7    Blanco hueso
8    Gris
9    Celeste
a    Verde claro
b    Celeste claro
c    Rojo fuerte
d    Morado oscuro
e    Color crema
f    Blanco puro

        */
}