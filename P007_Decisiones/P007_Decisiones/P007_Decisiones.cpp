// P007_Decisiones.cpp by Jose Peña
//

#include <iostream>

int main()
{
    int peleadores = 0, formato = 0, peleas = 0, grupos = 0;
    std::cout << "Dime tu numero de peleadores " << std::endl;
    std::cin >> peleadores;
    std::cout << "Dime el formato de pelea: " << std::endl;
    std::cout << "1.- Royal Rumble  2.- Eliminatoria directa  3.- Grupos, Semifinal y Final. " << std::endl;
    std::cin >> formato;
    switch (formato)
    {
    case 1:
        std::cout << "El numero de combates necesario para obtener a un ganador es de " << peleadores - 1 << " combates." << std::endl;
        break;
    case 2:
        std::cout << "El numero de combates necesario para obtener a un ganador es de " << peleadores - 1 << " combates." << std::endl;
        break;
    case 3:
        if (peleadores % 4 == 0)
        {
            grupos = peleadores / 4;
            peleas = grupos * 6;
            peleas += (grupos * 2) - 1;
            std::cout << "El numero de combates necesario para obtener a un ganador es de " << peleas << " combates." << std::endl;
        }
        else
        {
            std::cout << "Este formato no puede funcionar si los peleadores no forman grupos de 4." << std::endl;
        }
        break;
    default:
        std::cout << "Ese no es un formato valido." << std::endl;
        break;
    }
}

