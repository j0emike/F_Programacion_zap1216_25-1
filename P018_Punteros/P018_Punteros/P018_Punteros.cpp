// P018_Punteros.cpp : by j0emike
//

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <locale>
#include <Windows.h>

int main()
{
    //Fragmento para aleatorizar
    static bool seedInitialized = false;
    if (!seedInitialized) {
        srand(static_cast<unsigned>(time(0)));
        seedInitialized = true;
    }

    //Poner caracteres españoles
    setlocale(LC_ALL, "en_MX.UTF-8");

    //Crear punteros para almacenar juegos
    int* filas = NULL;
    int* columnas = NULL;
    std::cout << "Hola usuario, dime las dimensiones de la matriz que deseas guardar" << std::endl;
    std::cin >> tamanio;

    //Crear variables con el tamaño que deseamos
    int* filas = new int[tamanio];
    //metodo para almacenar información
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "Ingresa el titulo del Juego número " << i + 1 << std::endl;
        std::cin.ignore();
        getline(std::cin, titulo[i]);
        std::cout << "Ingresa el autor del Juego; " << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa el año de publicación del Juego; " << std::endl;
        std::cin >> anio_Publicacion[i];
        system("CLS");
    }

    //Teoría/Practica de Funciones.
    //Una función es una nave espacial
    //Imprimir los datos recolectados
    imprimir(titulo, Autor, anio_Publicacion, tamanio);
    delete[] titulo;
    delete[] Autor;
    delete[] anio_Publicacion;
    titulo = NULL;
    Autor = NULL;
    anio_Publicacion = NULL;
}