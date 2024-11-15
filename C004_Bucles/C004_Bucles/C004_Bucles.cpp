// C004_Bucles.cpp 
// Para que sirve un bucle? 
// Repetir - Contar - Cobrar
// While - Di while - For

#include <stdio.h>
#include <iostream>
#include <string>
#include <locale>
#include <Windows.h>

//Espacio para declarar funciones
void imprimir(std::string* titulo, std::string* Autor, int* anio_Pub, int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "El titulo del juego numero " << i + 1 << " es: " << titulo[i] << std::endl;
        std::cout << "El Autor del juego numero " << i + 1 << " es: " << Autor[i] << std::endl;
        std::cout << "El año de publicación del juego numero " << i + 1 << " es: " << anio_Pub[i] << std::endl;
    }
}

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
        // P008_PUNTEROS_V2.cpp
    // Sintaxys de Memoria Dinamica


    
        setlocale(LC_ALL, "en_MX.UTF-8");
        //Crear punteros para almacenar juegos
        std::string* titulo = NULL; //Inicializar el puntero en NULL
        std::string* Autor = NULL;
        int* anio_Publicacion = NULL;
        int tamanio = 0;
        std::cout << "Hola gamer cuantos juegos quieres guardar??\n";
        std::cin >> tamanio;
        //No tenemos que tener cautiva la memoria
        //std::string titulos[100];
        //Crear variables con el tamaño que deseamos
        titulo = new std::string[tamanio];
        Autor = new std::string[tamanio];
        anio_Publicacion = new int[tamanio];
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