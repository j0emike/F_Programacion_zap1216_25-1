// P021_Battle_Royale.cpp : by j0emike
//

#include <iostream>
#include <vector>
#include <string>
#include <ctime>

struct Contendiente {
    std::string nombre;
    int velocidad;
    int fuerza;
    int inteligencia;
    int suerte;

 
    void imprimir(){
        std::cout << "Nombre: " << nombre
            << " | Velocidad: " << velocidad
            << " | Fuerza: " << fuerza
            << " | Inteligencia: " << inteligencia
            << " | Suerte: " << suerte << '\n';
    }
};

enum PowerUp {
    VELOCIDAD = 0,
    FUERZA,
    INTELIGENCIA,
    SUERTE,
    TOTAL_POWERUPS
};

// Función para aplicar un power-up
void aplicarPowerUp(Contendiente& c) {
    int powerUp = rand() % TOTAL_POWERUPS;
    int extra = rand() % 21;
    switch (powerUp) {
    case VELOCIDAD:
        c.velocidad += extra;
        break;
    case FUERZA:
        c.fuerza += extra;
        break;
    case INTELIGENCIA:
        c.inteligencia += extra;
        break;
    case SUERTE:
        c.suerte += extra;
        break;
    }
}

Contendiente realizarCombates(std::vector<Contendiente> contendientes, int(Contendiente::* atributo), const std::string& nombreCategoria) {
    std::cout << "\nCombates de la categoria: " << nombreCategoria << std::endl;

    while (contendientes.size() > 1) {
        std::vector<Contendiente> ganadores;

        for (size_t i = 0; i < contendientes.size(); i += 2) {
            if (i + 1 < contendientes.size()) {
                Contendiente& c1 = contendientes[i];
                Contendiente& c2 = contendientes[i + 1];
                std::cout << c1.nombre << " (" << c1.*atributo << ") vs "
                    << c2.nombre << " (" << c2.*atributo << "): ";

                if (c1.*atributo >= c2.*atributo) {
                    std::cout << c1.nombre << " GANA\n";
                    ganadores.push_back(c1);
                }
                else {
                    std::cout << c2.nombre << " GANA\n";
                    ganadores.push_back(c2);
                }
            }
            else { //Caso para ultimo en pie.
                ganadores.push_back(contendientes[i]);
            }
        }

        contendientes = ganadores;
    }
    return contendientes.front();
}

int main() {
    srand(static_cast<unsigned>(time(0))); 

    std::vector<std::string> nombres = {
        "Ivan", "Jorge", "Sebas", "Tian", "Gonzalo", "Ruben", "Aleks",
        "Aron", "STV", "Sara", "Aly", "Raz", "Laura", "Liz",
        "Heriberto", "Mau", "Oso", "Lillian", "Samuel", "Pepe"
    };

    std::vector<Contendiente> contendientes;
    for (const auto& nombre : nombres) {
        Contendiente c;
        c.nombre = nombre;
        c.velocidad = rand() % 26;   
        c.fuerza = rand() % 26;
        c.inteligencia = rand() % 26;
        c.suerte = rand() % 26;
        aplicarPowerUp(c);          
        contendientes.push_back(c);
    }

    int opcion;
    do {
        std::cout << "1. Ver combates por Velocidad\n";
        std::cout << "2. Ver combates por Fuerza\n";
        std::cout << "3. Ver combates por Inteligencia\n";
        std::cout << "4. Ver combates por Suerte\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            Contendiente ganador = realizarCombates(contendientes, &Contendiente::velocidad, "Velocidad");
            std::cout << "\nGANADOR FINAL: " << ganador.nombre << " con " << ganador.velocidad << " en Velocidad.\n";
            break;
        }
        case 2: {
            Contendiente ganador = realizarCombates(contendientes, &Contendiente::fuerza, "Fuerza");
            std::cout << "\nGANADOR FINAL: " << ganador.nombre << " con " << ganador.fuerza << " en Fuerza.\n";
            break;
        }
        case 3: {
            Contendiente ganador = realizarCombates(contendientes, &Contendiente::inteligencia, "Inteligencia");
            std::cout << "\nGANADOR FINAL: " << ganador.nombre << " con " << ganador.inteligencia << " en Inteligencia.\n";
            break;
        }
        case 4: {
            Contendiente ganador = realizarCombates(contendientes, &Contendiente::suerte, "Suerte");
            std::cout << "\nGANADOR FINAL: " << ganador.nombre << " con " << ganador.suerte << " en Suerte.\n";
            break;
        }
        case 5:
            std::cout << "Saliendo del programa...\n";
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente.\n";
        }
    } while (opcion != 5);

    return 0;
}
