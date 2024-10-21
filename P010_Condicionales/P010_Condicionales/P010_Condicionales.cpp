// P010_Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
#include <regex>

int main()
{
    setlocale(LC_ALL, "en-US");
    std::string apodo = "joemike";
    std::string apodo_usuario;
    int contra = 12345;
    int contra_usuario;
    int intentos = 3, opcion = 0;
    bool contains_non_alpha 
        = !std::regex_match(apodo_usuario, std::regex("^[A-Za-z]+$"));
    do
    {
        std::cout << "Que deseas hacer? " << std::endl;
        std::cout << "2. Ingresar nuevo usuario" << std::endl << "1. Login" << std::endl << "0. Salir" << std::endl;
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            do
            {
                std::cout << "Hola usuario dame tu nickname: " << std::endl;
                std::getline(std::cin, apodo_usuario);
                
            } while (contains_non_alpha != false);
            
            if (apodo == apodo_usuario)
            {
                do
                {
                    std::cout << "Para confirmar tu acceso ingresa tu contraseña: " << std::endl;
                    std::cin >> contra_usuario;
                    if (contra == contra_usuario)
                    {
                        std::cout << "Bienvenido " << apodo << std::endl;
                    }
                    else
                    {
                        std::cout << "Saquese impostor! >:c " << std::endl;
                        std::cout << "Intentos restantes " << intentos - 1 << std::endl;
                        intentos--;
                    }
                } while (intentos > 0);
            }
            else
            {
                std::cout << "No conozco a ese usuario :( " << std::endl;
            }
        }
        
    } while (opcion != 0);
}

