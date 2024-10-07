// P003_Decisiones_V2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
    int opcion = 0;
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
}

