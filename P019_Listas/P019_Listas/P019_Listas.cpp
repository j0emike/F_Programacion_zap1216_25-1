// P019_Listas.cpp : by j0emike

#include <iostream>

//Crearemos el nodo fuera del main
class nodo
{
public:
    std::string nombre;
    int edad;
    float ataque;
    double defensa;
    int velocidad;
    nodo* next;

private:
    int nip_Banco = 0123;
};

void imprimir_Lista(nodo* n)
{
    while (n != NULL)
    {
        std::cout << n->edad << "\n" << std::endl;
        n = n->next;
    }
}


int main()
{
    nodo* cabeza = NULL;
    nodo* torso = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    torso = new nodo();
    pies = new nodo();

    cabeza->edad = 17;
    cabeza->next = torso;

    torso->edad = 20;
    torso->next = pies;

    pies->edad = 25;
    pies->next = NULL;

    imprimir_Lista(cabeza);
}