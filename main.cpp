
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <chrono>

using namespace std;
//mutex usado para simular la capacidad del servidor.
mutex capacidad[4];

//Funcion que simula las acciones de los jugadores.
void turnos(int id) {
    //this_thread::sleap_for(chrono::milliseconds(500))
    cout << "Jugador " << id + 1 << " realizó sus turnos" << endl;
}

// Funcion que simula el servidor del juego.
void entrarJuego(int id) {
    bool entro = false;
//Ciclo donde los hilos intentaran entrar a la funcion "turnos"
    while (!entro) {
        for (int i = 0; i < 4; i++) {
            if (capacidad[i].try_lock()) {
                cout << "Jugador " << id + 1 << " ha ingresado al servidor (slot " << i + 1 << ")" << endl;

                // Simular tiempo de juego
                this_thread::sleep_for(chrono::milliseconds(500));
                turnos(id);
                this_thread::sleep_for(chrono::milliseconds(500));
                // Se libera el mutex al terminar la funcion
                capacidad[i].unlock();
                entro = true;
                break;
            }
        }

        if (!entro) {
            //mensaje de error
            cout << "Jugador " << id + 1 << " fallo al entrar al juego, reintentando..." << endl;
            this_thread::sleep_for(chrono::milliseconds(300)); // Espera antes de reintentar
        }
    }
}

int main() {
    const int numJugadores = 6;
    vector<thread> jugadores;

    for (int i = 0; i < numJugadores; i++) {
        jugadores.emplace_back(entrarJuego, i);
    }

    for (auto& j : jugadores) {
        j.join();
    }

    cout << "Todos los jugadores han jugado." << endl;
    return 0;
}
