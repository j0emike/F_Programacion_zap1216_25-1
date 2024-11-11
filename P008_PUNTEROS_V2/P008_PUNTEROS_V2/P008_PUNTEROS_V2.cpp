// P008_PUNTEROS_V2.cpp : by j0emike
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

//Espacio para declarar funciones
void imprimir(std::string* titulo, std::string* Autor, int* anio_Pub, int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "El titulo del juego numero " << i + 1 << " es: " << titulo[i] << std::endl;
        std::cout << "El autor del juego numero " << i + 1 << " es: " << Autor[i] << std::endl;
        std::cout << "El año de publicacion del juego numero " << i + 1 << " es: " << anio_Pub[i] << std::endl ;
    }
}

int main()
{
    setlocale(LC_ALL, "en_MX.UTF-8");
    //Crear punteros para almacenar el juego.
    std::string* titulo = NULL;
    std::string* Autor = NULL;
    int* anio_Publicacion = NULL;
    int tamanio = 0;
    std::cout << "Hola Gamer, cuantos juegos quieres guardar?" << std::endl;
    std::cin >> tamanio;

    //Crear variables con el tamaño que deseamos.
    titulo = new std::string[tamanio];
    Autor = new std::string[tamanio];
    anio_Publicacion = new int[tamanio];

    //Metodo para almacenar informacion.
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "Ingresa el titulo del juego numero " << i + 1 << std::endl;
        std::cin.ignore();
        getline(std::cin, titulo[i]);
        std::cout << "Ingresa el autor del juego " << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa el año de publicacion " << std::endl;
        std::cin >> anio_Publicacion[i];
    }

    //Teoria / Practica de Funciones
    //Una funcion es una nave espacial
    //Imprimir los datos recolectados
        imprimir(titulo, Autor, anio_Publicacion, tamanio);


    //Al dejar de usar los punteros, hay que matarlos >.<
    delete[] titulo;
    delete[] Autor;
    delete[] anio_Publicacion;
    titulo = NULL;
    Autor = NULL;
    anio_Publicacion = NULL;

}

