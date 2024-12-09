// AventuraDeTexto.cpp : by j0emike
//

#include <iostream>
#include <string>

using namespace std;

// Variables globales
bool haHabladoConTabernero = false;
bool haHabladoConHombreBorracho = false;
bool haHabladoConMesera = false;
bool haIdoAlBanio = false;
int inventario = 0; // 0: ninguno, 1: cerveza, 2: alitas con salsa BBQ
int dinero = 100;   // Cantidad de dinero que tiene Jhon

// Función para hablar con el tabernero
void hablarConTabernero() {
    if (haHabladoConTabernero) {
        cout << "El tabernero ya no tiene nada mas que decir." << endl;
        return;
    }

    haHabladoConTabernero = true;
    cout << "Hablas con el tabernero. Te dice que una persona en la cantina te está buscando y parece molesta." << endl;
    cout << "Tambien te advierte que no es buena idea juntarse con mujeres galantes." << endl;

    if (dinero > 50) {
        cout << "El tabernero, viendo que tienes suficiente dinero, te ofrece una cerveza." << endl;
        dinero -= 50;
        inventario = 1; // Jhon ahora tiene una cerveza
        cout << "Has recibido una cerveza. Tu dinero actual es: $" << dinero << endl;
    }
    else {
        cout << "No tienes suficiente dinero para recibir la cerveza." << endl;
    }
}

// Función para hablar con el hombre borracho
void hablarConHombreBorracho() {
    if (haHabladoConHombreBorracho) {
        cout << "El hombre borracho ya no tiene nada mas que decir." << endl;
        return;
    }

    haHabladoConHombreBorracho = true;
    cout << "El hombre borracho te cuenta como solia ser un pescador exitoso en Costa Alegre, pero sus problemas con el alcohol le costaron el acceso." << endl;
    cout << "Te pide que le regales una cerveza, pues se ha quedado sin dinero." << endl;

    if (inventario == 1 && dinero >= 50) {
        cout << "Le das la cerveza al hombre borracho. Te agradece y te dice que vio a una chica molesta entrar al WC. Ten cuidado." << endl;
        inventario = 0; // Se queda sin la cerveza
        dinero -= 50;   // Se gasta el dinero de la cerveza
    }
    else if (inventario != 1) {
        cout << "No tienes una cerveza para darle. El hombre borracho te insulta y se va de la cantina." << endl;
    }
    else {
        cout << "No tienes suficiente dinero para darle la cerveza." << endl;
    }
}

// Función para hablar con la mesera
void hablarConMesera() {
    if (haHabladoConMesera) {
        cout << "La mesera ya no tiene nada mas que decir." << endl;
        return;
    }

    haHabladoConMesera = true;
    cout << "La mesera te pregunta si quieres una cerveza o algo de comer." << endl;
    cout << "1. Cerveza ($50)" << endl;
    cout << "2. Alitas con salsa BBQ ($50)" << endl;

    int eleccion;
    cin >> eleccion;

    if (eleccion == 1) {
        if (dinero >= 50) {
            dinero -= 50;
            inventario = 1; // Jhon ahora tiene una cerveza
            cout << "Te has comprado una cerveza. Tu dinero actual es: $" << dinero << endl;
        }
        else {
            cout << "No tienes suficiente dinero para la cerveza." << endl;
        }
    }
    else if (eleccion == 2) {
        if (dinero >= 50) {
            dinero -= 50;
            inventario = 2; // Jhon ahora tiene alitas con salsa BBQ
            cout << "La mesera te da unas alitas con salsa BBQ. Ahora las tienes en tu inventario." << endl;
        }
        else {
            cout << "No tienes suficiente dinero para las alitas." << endl;
        }
    }
    else {
        cout << "Opcion no valida. La mesera se aleja con una expresion de desden." << endl;
    }
}

// Función para ir al baño
void irAlBanio() {
    if (haIdoAlBanio) {
        cout << "Ya has ido al WC antes. No hay nada más que hacer aqui." << endl;
        return;
    }

    haIdoAlBanio = true;
    cout << "Entro al WC y me encuentro con mi novia molesta. Me grita por venir a la cantina sin ella." << endl;

    if (inventario == 1) {
        cout << "Ella ve que tienes una cerveza y, enojada, te la rompe en la cabeza. Sin embargo, despues te da un beso y se calma." << endl;
    }
    else if (inventario == 2) {
        cout << "Ella ve que tienes unas alitas con salsa BBQ y, al ver el gesto amable, se calma y te perdona." << endl;
    }
    else {
        cout << "No tienes nada que ofrecerle, y en un arranque de ira, ella te dispara." << endl;
    }

    cout << "Game Over!" << endl;
}

int main() {
    int eleccion;

    cout << "Bienvenido a la cantina. Eres Jhon, y tienes que decidir que hacer." << endl;

    while (!haIdoAlBanio) {
        cout << "\nMenu de opciones:" << endl;
        cout << "1. Hablar con el tabernero" << endl;
        cout << "2. Hablar con el hombre borracho" << endl;
        cout << "3. Hablar con la mesera" << endl;
        cout << "4. Ir al WC" << endl;
        cout << "Elige una opción (1-4): ";
        cin >> eleccion;

        switch (eleccion) {
        case 1:
            hablarConTabernero();
            break;
        case 2:
            hablarConHombreBorracho();
            break;
        case 3:
            hablarConMesera();
            break;
        case 4:
            irAlBanio();
            break;
        default:
            cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }
    }

    return 0;
}

