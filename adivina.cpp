#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;
    cout << "🎮 ¡Bienvenido al juego de Adivina el Número! 🎮\n";
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

    return 0;
}
