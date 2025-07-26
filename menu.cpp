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

void juegoPiedraPapelTijera() {
    string opciones[] = {"Piedra", "Papel", "Tijera"};
    int eleccionJugador, eleccionPC;

    cout << "\n✂️  Juego: Piedra, Papel o Tijera ✂️\n";
    cout << "Elige: 0 = Piedra, 1 = Papel, 2 = Tijera\n";
    cin >> eleccionJugador;

    if (eleccionJugador < 0 || eleccionJugador > 2) {
        cout << "Opción inválida.\n";
        return;
    }

    srand(time(0));
    eleccionPC = rand() % 3;

    cout << "Tú: " << opciones[eleccionJugador] << " | PC: " << opciones[eleccionPC] << "\n";

    if (eleccionJugador == eleccionPC) {
        cout << "¡Empate!\n";
    } else if ((eleccionJugador == 0 && eleccionPC == 2) ||
               (eleccionJugador == 1 && eleccionPC == 0) ||
               (eleccionJugador == 2 && eleccionPC == 1)) {
        cout << "¡Ganaste!\n";
    } else {
        cout << "Perdiste.\n";
    }
}

void juegoDados() {
    srand(time(0));
    int jugador = rand() % 6 + 1;
    int pc = rand() % 6 + 1;

    cout << "\n🎲 Juego de Dados 🎲\n";
    cout << "Tú sacaste: " << jugador << "\n";
    cout << "PC sacó: " << pc << "\n";

    if (jugador > pc)
        cout << "¡Ganaste!\n";
    else if (jugador < pc)
        cout << "Perdiste.\n";
    else
        cout << "Empate.\n";
}

int main() {
    int opcion;
    do {
        cout << "\n===== MENÚ PRINCIPAL =====\n";
        cout << "1. Mostrar mensaje\n";
        cout << "2. Sumar dos números\n";
        cout << "3. Jugar Adivina el número\n";
        cout << "4. Jugar Piedra, Papel o Tijera\n";
        cout << "5. Jugar Dados\n";
        cout << "6. Salir\n";
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
                juegoPiedraPapelTijera();
                break;
            case 5:
                juegoDados();
                break;
            case 6:
                cout << "¡Hasta luego!\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while(opcion != 6);

    return 0;
}
