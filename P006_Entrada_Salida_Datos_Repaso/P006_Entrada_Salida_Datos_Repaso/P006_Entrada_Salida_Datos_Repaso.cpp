// P006_Entrada_Salida_Datos_Repaso.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    
    setlocale(LC_ALL, "en-US");
    std::string apodo = "j0emike";
    std::string apodo_usuario;
    std::string contra = "SecurePass";
    std::string contra_usuario;
    int opcion = 0;

    std::cout << "Hola usuario dame tu nickname: " << std::endl;
    std::getline(std::cin, apodo_usuario);

    if (apodo == apodo_usuario)
    {
        std::cout << "Para confirmar tu acceso ingresa tu contraseña: " << std::endl;
        std::getline(std::cin, contra_usuario);
        if (contra == contra_usuario)
        {
            std::cout << "Bienvenido " << apodo << std::endl;
        }
        else
        {
            std::cout << "Saquese impostor! >:c " << std::endl;
        }
    }
    else
    {
        std::cout << "No conozco a ese usuario :( " << std::endl;

    }
    
    std::cout << "Que es lo primero que haces al despertar?\n";
    std::cout << "1.- Tomas un baño? 2.- Desayunas? 3.- Corres porque ya se te hizo tarde? " << std::endl;
    std::cin >> opcion;
    switch (opcion)
    {
    case 1:
        std::cout << "Disfruta el baño. Se ejecuta la primera opcion \n";
        break;
    case 2:
        std::cout << "Provecho. Se ejecuta la segunda opcion \n";
        break;
    case 3:
        std::cout << "Corre!. Se ejecuta la tercera opcion \n";
        break;
    default:
        std::cout << "Esta opcion sale de los rangos permitidos \n";
        break;
    }

    std::cout << "Te parece que este es un buen codigo?" << std::endl;
    std::cout << "0.- No      1.- Si" << std::endl;
    std::cin >> opcion;
    if (opcion == 1)
    {
        std::cout << "Muchas gracias no olvides puntuarnos con 6 puntos en la tarea." << std::endl;
    }
    else
    {
        while (opcion != 1)
        {
            std::cout << "Te gustaria reconsiderarlo? " << std::endl;
            std::cout << "0.- No      1.- Si" << std::endl;
            std::cin >> opcion;
        }
        std::cout << "Muchas gracias no olvides puntuarnos con 6 puntos en la tarea >:)" << std::endl;
    }

    std::cout << apodo << " te envia saludos, deseas saludar de vuelta? " << std::endl;
    std::cout << "0.- No      1.- Si" << std::endl;
    std::cin >> opcion;
    if (opcion == 1)
    {
        std::cout << " Como lo quieres saludar? " << std::endl;
        std::cout << " 1. Chocar los puños   2. Ondear tu mano " << std::endl;
        std::cout << " 3. Love & Peace       4. Wasaaaaa " << std::endl;
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            std::cout << "*Estiras tu puño esperando respuesta*" << std::endl;
            break;
        case 2:
            std::cout << "*Ondeas tu mano de un lado a otro*" << std::endl;
            break;
        case 3:
            std::cout << "*Levantas tus dedos como hippie*" << std::endl;
            break;
        case 4:
            std::cout << "Wasaaaaa" << std::endl;
            break;
        default:
            std::cout << "Crei que querias saludar a " << apodo << " :(" << std::endl;
            break;
        }
        if (opcion == 4)
        {
            std::cout << "Wasaaaaaa" << std::endl;
        }
        else if (opcion == 1)
        {
            std::cout << "No es como que pueda chocarla, pero recibira tu saludo :) " << std::endl;
        }
        else
        {
            std::cout << ":)" << std::endl;
        }
    }
    
}