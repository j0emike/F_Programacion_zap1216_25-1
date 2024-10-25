// P011_Condicionales.cpp : by j0emike
//

#include <iostream>

int main()
{
    int respuesta;
    do
    {
    std::cout << "Hola, piensa en una pelicula de Morgan Freeman y tratare de adivinar cual es. " << std::endl;
    std::cout << "Recuerda, para todas las preguntas deberas responder " << std::endl;
    std::cout << "1. Si     0. No" << std::endl;
    std::cout << "Morgan Freeman es el protagonista?" << std::endl;
    std::cin >> respuesta;
    if (respuesta == 0)
    {
        std::cout << "Morgan Freeman es el narrador?" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 0)
        {
            std::cout << "Morgan Freeman es un millonario?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 0)
            {
                std::cout << "Morgan Freeman es Dios?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 0)
                {
                    std::cout << "Morgan Freeman es un adicto en rehabilitacion?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 0)
                    {
                        std::cout << "Tu pelicula es Robin Hood: Prince of Thieves con Kevin Costner" << std::endl;
                    }
                    else
                    {
                        std::cout << "Tu pelicula es Clean and Sober con Michael Keaton" << std::endl;
                    }
                }
                else
                {
                    std::cout << "El protagonista es Jim Carrey?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 0)
                    {
                        std::cout << "Tu pelicula es Evan Almighty con Steve Carell" << std::endl;
                    }
                    else
                    {
                        std::cout << "Tu pelicula es Bruce Almighty con Jim Carrey" << std::endl;
                    }
                }
            }
            else
            {
                std::cout << "Morgan Freeman es un inventor?" << std::endl;
                std::cin >> respuesta;
                if (respuesta == 0)
                {
                    std::cout << "Morgan Freeman sabe magia?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 0)
                    {
                        std::cout << "Tu pelicula es Angel has Fallen con Gerard Butler" << std::endl;
                    }
                    else
                    {
                        std::cout << "Tu pelicula es Now You See Me con Mark Ruffalo" << std::endl;
                    }
                }
                else
                {
                    std::cout << "Morgan Freeman sabe secretos militares?" << std::endl;
                    std::cin >> respuesta;
                    if (respuesta == 0)
                    {
                        std::cout << "Tu pelicula es 57 seconds con Josh Hutcherson" << std::endl;
                    }
                    else
                    {
                        std::cout << "Tu pelicula es Batman con Christian Bale" << std::endl;
                    }
                }


            }
        }
        else
        {
            std::cout << "La pelicula trata sobre barbaros?" << std::endl;
            std::cin >> respuesta;
            if (respuesta == 0)
            {
                std::cout << "Tu pelicula es La Marche de l'empereur" << std::endl;
            }
            else
            {
                std::cout << "Tu pelicula es Conan The Barbarian con Jason Momoa" << std::endl;
            }
        }
        std::cout << "Estoy en lo cierto?" << std::endl;
        std::cout << "1. Si     0. No" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 0)
        {
            std::cout << "Todos cometemos errores, intentemoslo de nuevo" << std::endl;
        }
        else
        {
            std::cout << "Genial, peliculon" << std::endl;
        }
    }
    else
    {
        std::cout << "Podria ser cualquiera, prueba con otra " << std::endl;
    }
    system("pause");
    system("cls");
    std::cout << "Quieres probar de nuevo?" << std::endl;
    std::cout << "1. Si     0. No" << std::endl;
    std::cin >> respuesta;
    } while (respuesta != 0);
}
