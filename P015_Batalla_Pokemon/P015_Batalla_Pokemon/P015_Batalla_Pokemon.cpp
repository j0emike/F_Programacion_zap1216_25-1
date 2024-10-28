#include <iostream>
#include <string>
#include <vector>

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

void combate(Pokemon& atacante, Pokemon& defensor) {
    std::cout << atacante.nombre << " ataca a " << defensor.nombre << "!\n";
    defensor.vida -= 10; 
    std::cout << defensor.nombre << " tiene ahora " << defensor.vida << " de vida.\n";
}

int main() {
    int modalidad, jugadores, opcion;

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

    do {
        std::cout << "Que deseas hacer?" << std::endl;
        std::cout << "0. Salir   1. Jugar" << std::endl;
        std::cin >> opcion;

        if (opcion == 1) {
            std::cout << "Cuantos jugadores seran? (1 o 2): ";
            std::cin >> jugadores;

            if (jugadores == 1) {
                std::cout << "Contra que entrenador te gustaria enfrentarte?" << std::endl;
                std::cout << "1. Tobías   2. Samurai" << std::endl;
                std::cin >> opcion;
                std::cout << "Elige la modalidad en la que lucharas (1. 1v1, 2. 2v2): ";
                std::cin >> modalidad;

                if (modalidad == 1) {
                    mostrarEquipo(EquipoS, 6);
                    int elegido;
                    std::cout << "Elige tu Pokémon (1-6): ";
                    std::cin >> elegido;
                    if (opcion == 1)
                    {
                        Pokemon& atacante = EquipoT[elegido - 1];
                        Pokemon& defensor = EquipoS[0];

                        while (atacante.vida > 0 && defensor.vida > 0) {
                            combate(atacante, defensor);
                        }

                        if (atacante.vida > 0) {
                            std::cout << atacante.nombre << " gana!" << std::endl;
                        }
                        else {
                            std::cout << defensor.nombre << " gana!" << std::endl;
                        }
                    }
                }
                else if (modalidad == 2) {
                    std::cout << "Modo 2v2 no implementado aún." << std::endl;
                }
            }
        }
    } while (opcion != 0);

    return 0;
}