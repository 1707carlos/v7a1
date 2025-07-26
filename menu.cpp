#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarMensaje() {
    cout << "¡Hola desde el menú principal!" << endl;
}

int sumar(int a, int b) {
    return a + b;
}

void juegoAdivina() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;
    cout << "\n🎮 Bienvenido al juego: Adivina el número 🎮\n";
    cout << "He pensado un número entre 1 y 100. ¿Cuál es?\n";

    do {
        cout << "Tu intento: ";
        cin >> intento;

        if (intento > secreto)
            cout << "Muy alto, intenta con uno menor.\n";
        else if (intento < secreto)
            cout << "Muy bajo, intenta con uno mayor.\n";
        else
            cout << "🎉 ¡Correcto! El número era " << secreto << ".\n";
    } while (intento != secreto);
}

int main() {
    int opcion;
    do {
        cout << "\n===== MENÚ PRINCIPAL =====\n";
        cout << "1. Mostrar mensaje\n";
        cout << "2. Sumar dos números\n";
        cout << "3. Jugar Adivina el número\n";
        cout << "4. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                mostrarMensaje();
                break;
            case 2: {
                int x, y;
                cout << "Ingresa dos números: ";
                cin >> x >> y;
                cout << "La suma es: " << sumar(x, y) << "\n";
                break;
            }
            case 3:
                juegoAdivina();
                break;
            case 4:
                cout << "¡Hasta luego!\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while(opcion != 4);

    return 0;
}
