// P010_Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>
#include <regex>

bool soloLetras(const std::string& frase) {
    std::regex patron("^[A-Za-z ]+$");
    return std::regex_match(frase, patron);
}

int main()
{
    setlocale(LC_ALL, "en-US");
    std::string apodo = "joemike";
    std::string apodo_usuario;
    int contra = 12345;
    int contra_usuario;
    int intentos = 3, opcion = 0;
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
                std::cin.ignore();
                std::getline(std::cin, apodo_usuario);
                if (!soloLetras(apodo_usuario))
                {
                    std::cout << "El nickname solo lleva letras." << std::endl;
                    system("pause");
                }
                system("cls");
            } while (!soloLetras(apodo_usuario));
            
            if (apodo == apodo_usuario)
            {
                do
                {
                    std::cout << "Hola " << apodo_usuario << std::endl;
                    std::cout << "Para confirmar tu acceso ingresa tu contraseña: " << std::endl;
                    std::cin >> contra_usuario;
                    if (contra == contra_usuario)
                    {
                        std::cout << "Bienvenido " << apodo << " presiona un boton para hacer log off " << std::endl;
                        intentos = 0;
                        system("pause");
                        system("cls");
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
            break;
        case 2:
            do
            {
                std::cout << "Hola usuario dame tu nickname: " << std::endl;
                std::cin.ignore();
                std::getline(std::cin, apodo_usuario);
                if (!soloLetras(apodo_usuario))
                {
                    std::cout << "El nickname solo lleva letras." << std::endl;
                    system("pause");
                }
                system("cls");
            } while (!soloLetras(apodo_usuario));
            do
            {
                std::cout << "Ingresa la contraseña: ";
                if (std::cin >> contra_usuario) {
                    break;
                }
                else {
                    std::cout << "La contraseña solo pueden ser numeros" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                system("cls");
            } while (true);
            contra = contra_usuario;
            apodo = apodo_usuario;
            break;
        }

    } while (opcion != 0);
}

