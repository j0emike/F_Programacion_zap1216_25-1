// P001_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <time.h>
#include <locale> //Libreria para cambiar idiomar
#include <codecvt> //Libreria para cambiar codigos de UTF
#include <locale.h> //head file que solo funciona en Windows

int main()
{
    setlocale(LC_ALL, "en-US");
    std::locale::global(std::locale("en_US.UTF-8"));
    setlocale(LC_ALL, "es_MX.UTF-8");
    //\n es un salto de linea
    //std::endl;
    std::cout << "Hola!\n";
    //inicializaremos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de declaracion o inicializacion
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales
    float Altura = 0;
    float Cali = 0;
    //Para guardar Verdades o Falsedades
    bool d1 = false;
    //Para guardar numeros realmente extensos
    double Exponencial = 0;
    //Para guardar letras
    char sexo = ' ';
    //Para guardar cadenas de caracteres, osea muchas letras
    char nombre[15] = "Computadora"; //Valor L no modificable
    std::string name = " ";

    //Hablemos con el usuario y solicitemos la informacion.
    std::cout << "Cuentame! Cuantos años tienes? ";

    //Para recibir datos del usuario necesitamos utilizar el protocolo de entrada de datos
    //STD::CIN >> Variable donde se guardan los datos.
    std::cin >> Edad;

    std::cout << "Y cuanto dirias que mides?\n (Dame tu respuesta en centimetros por favor)\n";
    std::cin >> Altura;

    d1 = Altura < 170;

    if (d1 = true) {
        std::cout << "Ja! Chaparro :(" << std::endl;
    }

    std::cout << "Sabias que una variable tipo double almacena numeros desde 2,22507*(e^-308) hasta 1,79769*(e^308)? :O" << std::endl;

    std::cout << "Y cual es tu sexo?" << std::endl;
    std::cin >> sexo;

    std::cout << "A todo esto, olvide preguntar tu nombre!" << std::endl;
    std::cin >> name;

    //Mostrar la informacion obtenida.
    std::cout << "Entonces tienes " << Edad << " años." << std::endl;
    std::cout << "Mides " << Altura << std::endl;
    std::cout << "Tu sexo es " << sexo << std::endl;
    std::cout << "Y te llamas " << name << " Super! Bienvenido <3" << std::endl;
    std::cout << "Mi nombre es " << nombre;
}

