// P018_Punteros.cpp : by j0emike
//

#include <iostream>
#include <ctime>
#include <locale>
#include <cstdlib>

int main()
{
    // Fragmento para aleatorizar
    static bool seedInitialized = false;
    if (!seedInitialized) {
        srand(static_cast<unsigned>(time(0)));
        seedInitialized = true;
    }

    int tamanioFilas = 0;
    int tamanioColumnas = 0;

    // Poner caracteres españoles
    setlocale(LC_ALL, "es_ES.UTF-8");  

    // Solicitar dimensiones de la matriz
    std::cout << "Hola usuario, dime las dimensiones de la matriz que deseas guardar" << std::endl;
    std::cout << "Filas: ";
    std::cin >> tamanioFilas;
    std::cout << "Columnas: ";
    std::cin >> tamanioColumnas;

    // Crear una matriz dinámica de tamaño `tamanioFilas` x `tamanioColumnas`
    int** matriz = new int* [tamanioFilas];
    for (int i = 0; i < tamanioFilas; i++) {
        matriz[i] = new int[tamanioColumnas];
    }

    if (tamanioColumnas > 3 || tamanioFilas > 3)
    {
        // Llenar la matriz con valores aleatorios
        for (int i = 0; i < tamanioFilas; i++) {
            for (int j = 0; j < tamanioColumnas; j++) {
                matriz[i][j] = rand() % 10;
            }
        }
    }
    else
    {
        std::cout << "Introduce los valores de la matriz (filas x columnas): " << std::endl;
        for (int i = 0; i < tamanioFilas; i++) {
            for (int j = 0; j < tamanioColumnas; j++) {
                std::cout << "Introduce el valor de la fila " << i << " y la columna " << j << std::endl;
                std::cin >> matriz[i][j];
            }
        }
    }
    
    // Mostrar la matriz
    std::cout << "Matriz generada:" << std::endl;
    for (int i = 0; i < tamanioFilas; i++) {
        for (int j = 0; j < tamanioColumnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Liberar la memoria de la matriz dinámica
    for (int i = 0; i < tamanioFilas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}