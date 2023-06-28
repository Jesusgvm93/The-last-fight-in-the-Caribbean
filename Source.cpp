#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Pirates.h"
#include "Ship.h"

using namespace std;

int main()
{
    srand(time(0));
    cout << "Welcome to the last fight in the Caribbean" << endl;
    Ship newShip;

    newShip.GetStatistics();

    while (true) {
        int choice;
        cout << "\n¿Que accion deseas realizar?" << endl;
        cout << "1. Atacar fortaleza" << endl;
        cout << "2. Saquear" << endl;
        cout << "3. Mostrar estadisticas" << endl;
        cout << "4. Salir del juego" << endl;
        cout << "Ingresa el número de la accion: ";
        cin >> choice;

        switch (choice) {
        case 1:
            int fortressType;
            cout << "\nElige el tipo de fortaleza a atacar:" << endl;
            cout << "1. Fortaleza debil" << endl;
            cout << "2. Fortaleza intermedia" << endl;
            cout << "3. Fortaleza fuerte" << endl;
            cout << "Ingresa el numero de la fortaleza: ";
            cin >> fortressType;
            newShip.attackFortress(fortressType);
            break;
        case 2:
            newShip.loot();
            break;
        case 3:
            newShip.GetStatistics();
            break;
        case 4:
            cout << "Gracias por jugar." << endl;
            return 0;
        default:
            cout << "Opcion invalida. Por favor, intenta de nuevo." << endl;
            break;
        }

        if (newShip.isGameOver()) {
            cout << "¡Tu tripulacion ha sido derrotada! Game Over." << endl;
            cout << "Gracias por jugar." << endl;
            return 0;
        }
    }

    return 0;
}