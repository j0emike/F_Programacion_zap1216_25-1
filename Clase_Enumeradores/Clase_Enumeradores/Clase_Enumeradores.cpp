// Clase_Enumeradores.cpp : by j0emike
//

#include <iostream>

//Creacion del enumerador.

enum Estado_Alumno
{
    inscripcion = 0,
    semestre_1 = 1,
    semestre_2 = 2,
    Egresar = 9,
    Titulando = 10,
    Titulado = 100,
};

int main()
{
    Estado_Alumno Juan = Egresar;
    std::cout << Juan << std::endl;
    
}
