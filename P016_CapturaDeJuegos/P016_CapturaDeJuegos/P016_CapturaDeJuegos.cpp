// P016_CapturaDeJuegos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string nombreJuegos[3] = {"Metal Gear Solid: The Twin Snakes", "Death's Door", "Broforce"};
    int anioPublicacion[3] = { 2004, 2021, 2012 };
    std::string autor[3] = { "Kojima", "David Fenn", "Evan Greenwod" };
    std::string studio[3] = { "Konami", "Acid Nerve", "Free Lives" };

    for (int i = 0; i < 3; i++)
    {
        std::cout << nombreJuegos[i] << std::endl;
        std::cout << anioPublicacion[i] << std::endl;
        std::cout << autor[i] << std::endl;
        std::cout << studio[i] << std::endl;
        std::cout << std::endl;
    }
    
}
