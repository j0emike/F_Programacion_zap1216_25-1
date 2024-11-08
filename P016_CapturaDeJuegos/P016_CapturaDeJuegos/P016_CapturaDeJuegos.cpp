// P016_CapturaDeJuegos.cpp : by j0emike
//

#include <iostream>
#include <string>

int main()
{
    std::string nombreJuegos[3] = {"Metal Gear Solid: The Twin Snakes", "Death's Door", "Broforce"};
    int anioPublicacion[3] = { 2004, 2021, 2012 };
    std::string autor[3] = { "Kojima", "David Fenn", "Evan Greenwod" };
    std::string studio[3] = { "Konami", "Acid Nerve", "Free Lives" };

    std::cout << "Buen dia usuario, te vengo a recomendar 3 juegos: " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << nombreJuegos[i] << std::endl;
        std::cout << anioPublicacion[i] << std::endl;
        std::cout << autor[i] << std::endl;
        std::cout << studio[i] << std::endl;
        std::cout << std::endl;
    }

    //Pedir al usuario sus 3 juegos

    std::cout << "Espero que te gusten, seria genial si tu tambien pudieras recomendarme 3: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Nombre del juego " << i+1 << ": " << std::endl;
        std::cin >> nombreJuegos[i];
        std::cout << "Año de publicacion: " << std::endl;
        std::cin >> anioPublicacion[i];
        std::cout << "Autor: " << std::endl;
        //Aqui iba un getline
        std::cin >> autor[i];
        std::cout << "Estudio: " << std::endl;
        std::cin >> studio[i];
        std::cout << std::endl;
    }

    system("cls");

    std::cout << "Tus juegos son: " << std::endl;

    for (int i = 0; i < 3; i++)
    {
        std::cout << nombreJuegos[i] << std::endl;
        std::cout << anioPublicacion[i] << std::endl;
        std::cout << autor[i] << std::endl;
        std::cout << studio[i] << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Excelente, tratare de jugarlos." << std::endl;
}
