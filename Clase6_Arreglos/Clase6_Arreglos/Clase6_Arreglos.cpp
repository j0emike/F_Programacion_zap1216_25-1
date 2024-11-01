// Clase6_Arreglos.cpp : by j0emike
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    static bool seedInitialized = false;
    if (!seedInitialized) {
        srand(static_cast<unsigned>(time(0)));
        seedInitialized = true;
    }
    int edades[3][2] = { {1,2},{9,8},{14,21} };
    int filas = (sizeof(edades) / sizeof(edades[0]));
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    int matriz[3][3];
    int matriz2[5][5];
    int matriz3[10][10];


    std::cout << "Numero de filas: " << filas << std::endl;
    std::cout << "Numero de columnas: " << columnas << std::endl;
    //3x3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = (rand() % 10) + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << " " << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    //5x5
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz2[i][j] = (rand() % 10) + 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << " " << matriz2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    //10x10
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz3[i][j] = (rand() % 10) + 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << " " << matriz3[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
