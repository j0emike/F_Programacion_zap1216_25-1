#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para srand(), Ivan nos recomendo usar ese
#include <ctime>   // Para time()

struct Pokemon {
    std::string nombre;
    int vida;
    std::string movimientos[4];
};

void mostrarEquipo(const Pokemon equipo[], int tamano) {
    std::cout << "Tu equipo:\n";
    for (int i = 0; i < tamano; ++i) {
        std::cout << i + 1 << ". " << equipo[i].nombre << " (Vida: " << equipo[i].vida << ")\n";
    }
}

void llenarEquipo(Pokemon equipo[]) {
    std::cout << "A continuacion crea a tu equipo pokemon" << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cout << "Introduce el nombre del Pokémon " << (i + 1) << ": ";
        std::getline(std::cin >> std::ws, equipo[i].nombre); 

        equipo[i].vida = 100;

        std::cout << "Introduce 4 movimientos para " << equipo[i].nombre << ":\n";
        for (int j = 0; j < 4; ++j) {
            std::cout << "Movimiento " << (j + 1) << ": ";
            std::getline(std::cin >> std::ws, equipo[i].movimientos[j]); // std::ws ignora espacios en blanco
        }
    }
}

void combate(Pokemon& jugador, Pokemon& rival) {
    system("cls");
    // Generar números aleatorios
    static bool seedInitialized = false;
    if (!seedInitialized) {
        srand(static_cast<unsigned>(time(0)));
        seedInitialized = true;
    }
    //Use ChatGPT para ver como se inicializaba

    while (jugador.vida > 0 && rival.vida > 0) {
        // Ataque del jugador
        int ataqueAleatorio = rand() % 4;
        std::string movimiento = jugador.movimientos[ataqueAleatorio];

        std::cout << jugador.nombre << " usa " << movimiento << " contra " << rival.nombre << "!\n";
        rival.vida -= rand() % 11;
        std::cout << rival.nombre << " tiene ahora " << rival.vida << " de vida.\n";

        if (rival.vida <= 0) {
            std::cout << jugador.nombre << " gana!" << std::endl;
            return;
        }

        system("pause");

        // Ataque del rival
        ataqueAleatorio = rand() % 4;
        movimiento = rival.movimientos[ataqueAleatorio];

        std::cout << rival.nombre << " usa " << movimiento << " contra " << jugador.nombre << "!\n";
        jugador.vida -= rand() % 11;
        std::cout << jugador.nombre << " tiene ahora " << jugador.vida << " de vida.\n";

        if (jugador.vida <= 0) {
            std::cout << rival.nombre << " gana!" << std::endl;
            return;
        }

        system("pause");
    }
}

int main() {
    int equipo, jugadores, opcion, elegido, rival;

    Pokemon EquipoT[6] = { {"Ultra Necrozma", 100, {"Géiser fotónico", "Enfado", "Trampa Rocas", "Onda Trueno"}},
                           {"Volcanion", 1000, {"Lanzallamas", "Escaldar", "Chorro de Vapor", "Tierra Viva"}},
                           {"Genesect", 1000, {"Cabeza de Hierro", "Tijera-X", "Velocidad Extrema", "Patada Ignea"}},
                           {"Darkrai", 1000, {"Hipnosis", "Pulso Oscuro", "Bomba Lodo", "Corte Vacío"}},
                           {"Mega Rayquaza", 1000, {"Ascenso Draco", "Cascada", "V de fuego", "Cabeza de Hierro"}},
                           {"Mewtwo", 1000, {"Psíquico", "Energibola", "Esfera Aural", "Triataque"}}
    };

    Pokemon EquipoS[6] = { {"Metapod", 1, {"Fortaleza", "Fortaleza", "Fortaleza", "Fortaleza"}},
                           {"Metapod", 1, {"Fortaleza", "Fortaleza", "Fortaleza", "Fortaleza"}},
                           {"Metapod", 1, {"Fortaleza", "Fortaleza", "Fortaleza", "Fortaleza"}},
                           {"Metapod", 1, {"Fortaleza", "Fortaleza", "Fortaleza", "Fortaleza"}},
                           {"Metapod", 1, {"Fortaleza", "Fortaleza", "Fortaleza", "Fortaleza"}},
                           {"Metapod", 1, {"Fortaleza", "Fortaleza", "Fortaleza", "Fortaleza"}}
    };

    Pokemon EquipoJ[6] = {

    };

    do {
        std::cout << "Que deseas hacer?" << std::endl;
        std::cout << "0. Salir   1. Jugar" << std::endl;
        std::cin >> opcion;

        if (opcion == 1) {
            std::cout << "Cuantos jugadores seran? (1 o 2): ";
            std::cin >> jugadores;

            if (jugadores == 1) {
                std::cout << "Deseas usar a tu propio equipo o usar uno de los ya creados?" << std::endl;
                std::cout << "0. Propio    1. Existente" << std::endl;
                std::cin >> equipo;
                if (equipo == 1)
                {
                    std::cout << "Que entrenador te gustaria usar?" << std::endl;
                    std::cout << "1. Tobías   2. Samurai" << std::endl;
                    std::cin >> opcion;
                }
                else
                {
                    llenarEquipo(EquipoJ);
                    opcion = 0;
                }
                std::cout << "Contra que entrenador te gustaria enfrentarte?" << std::endl;
                std::cout << "1. Tobías   2. Samurai" << std::endl;
                std::cin >> rival;
                
                std::cout << "Lucharas en un combate 1v1" << std::endl;
                if (opcion == 0 && rival == 1)
                {
                    std::cout << "Elige tu Pokémon (1-6): ";
                    mostrarEquipo(EquipoJ, 6);
                    std::cin >> elegido;
                    Pokemon jugador = EquipoJ[elegido - 1];
                    Pokemon rival = EquipoT[rand() % 6];
                    while (jugador.vida > 0 && rival.vida > 0) {
                        combate(jugador, rival);
                    }
                    system("pause");
                    system("cls");
                }
                else if (opcion == 0 && rival == 2)
                {
                    std::cout << "Elige tu Pokémon (1-6): ";
                    mostrarEquipo(EquipoJ, 6);
                    std::cin >> elegido;
                    Pokemon jugador = EquipoJ[elegido - 1];
                    Pokemon rival = EquipoS[rand() % 6];

                    while (jugador.vida > 0 && rival.vida > 0) {
                        combate(jugador, rival);
                    }
                    system("pause");
                    system("cls");
                }
                else if (opcion == 1 && rival == 1)
                {
                    std::cout << "Elige tu Pokémon (1-6): ";
                    mostrarEquipo(EquipoT, 6);
                    std::cin >> elegido;
                    Pokemon jugador = EquipoT[elegido - 1];
                    Pokemon rival = EquipoT[rand() % 6];

                    while (jugador.vida > 0 && rival.vida > 0) {
                        combate(jugador, rival);
                    }
                    system("pause");
                    system("cls");
                }
                else if (opcion == 1 && rival == 2)
                {
                    std::cout << "Elige tu Pokémon (1-6): ";
                    mostrarEquipo(EquipoT, 6);
                    std::cin >> elegido;
                    Pokemon jugador = EquipoT[elegido - 1];
                    Pokemon rival = EquipoS[rand() % 6];

                    while (jugador.vida > 0 && rival.vida > 0) {
                        combate(jugador, rival);
                    }
                    system("pause");
                    system("cls");
                }
                else if (opcion == 2 && rival == 1)
                {
                    std::cout << "Elige tu Pokémon (1-6): ";
                    mostrarEquipo(EquipoS, 6);
                    std::cin >> elegido;
                    Pokemon jugador = EquipoS[elegido - 1];
                    Pokemon rival = EquipoT[rand() % 6];

                    while (jugador.vida > 0 && rival.vida > 0) {
                        combate(jugador, rival);
                    }
                    system("pause");
                    system("cls");
                }
                else if (equipo == 2 && rival == 2)
                {
                    std::cout << "Elige tu Pokémon (1-6): ";
                    mostrarEquipo(EquipoS, 6);
                    std::cin >> elegido;
                    Pokemon jugador = EquipoS[elegido - 1];
                    Pokemon rival = EquipoT[rand() % 6];

                    while (jugador.vida > 0 && rival.vida > 0) {
                        combate(jugador, rival);
                    }
                    system("pause");
                    system("cls");
                }
            }
            else
            {
                std::cout << "Me rompi la cabeza y no me dio el tiempo para implementarlo, por favor prueba otro modo " << std::endl;
                system("pause");
            }
        }
        system("cls");
    } while (opcion != 0);

    return 0;
}