// P004_Entrada_y_Salida_de_datos.cpp by Jose Peña
/*
3 bool
2 string
1 char
2 int
1 float
*/
#include <iostream>
#include <string>

int main()
{
    bool seguro = 0, tarjeton = 0, efectivo = 0;
    std::string nombre = " ", apellidos = " ";
    char sexo = ' ';
    int peso = 0, IMC = 0;
    float altura = 0;
    std::cout << "Registro de pacientes" << std::endl;
    std::cout << "El paciente cuenta con seguro medico?" << std::endl << "'1.- Si'     '0.-No'" << std::endl;
    std::cin >> seguro;
    if (seguro == 1)
    {
        std::cout << "El paciente trae su tarjeton?" << std::endl << "'1.- Si'     '0.-No'" << std::endl;
        std::cin >> tarjeton;
        if (tarjeton == 1)
        {
            std::cout << "Por el momento solo contamos con pago en efectivo." << std::endl;
            std::cout << "Cuenta con efectivo? " << std::endl << "'1.- Si'     '0.-No'" << std::endl;
            std::cin >> efectivo;
            if (efectivo == 1)
            {
                std::cout << "Introduzca el nombre del paciente. " << std::endl;
                std::cin.ignore();
                getline(std::cin, nombre);

                std::cout << "Introduzca los apellidos del paciente. " << std::endl;
                getline(std::cin, apellidos);

                std::cout << "Introduzca el sexo del paciente. " << std::endl;
                std::cin >> sexo;

                std::cout << "Introduzca la altura en metros del paciente. " << std::endl;
                std::cin >> altura;

                std::cout << "Introduzca el peso en kilos del paciente" << std::endl;
                std::cin >> peso;

                std::cout << "El IMC es " << peso / (altura * altura);
            }
            else
            {
                std::cout << "Lo sentimos, vuelva pronto.";
            }
        }
        else
        {
            std::cout << "Lo sentimos, no podemos atender sin tarjeton, vuelva pronto.";
        }
    }
    else
    {
        std::cout << "Lo sentimos, no podemos atender pacientes sin seguro, vuelva pronto.";
    }
}

