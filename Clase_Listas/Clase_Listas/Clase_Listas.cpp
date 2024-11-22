// Clase_Listas.cpp : by j0emike
//

#include <iostream>

//Creacion del nodo fuera del main
class nodo
{
public:
	std::string nombrel;
	int edad;
	float ataque;
	double defensa;
	int velocidad;
	nodo* next;
};

void imprimir_Lista(nodo* n)
{
	while (n != NULL)
	{
		std::cout << n->edad << std::endl;
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

