//Nombre: Alejandra del Rosario Ramos Mamani
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    srand (time(0));
    int userScore = 0;
    int computerScore = 0;
    int userChoice;
		while (userScore < 3 && computerScore < 3) {
    	cout << "Bienvenido al juego Piedra, Papel o Tijera." <<endl;
    	cout << "Menu de opciones:" <<endl;
        cout << "1. Piedra" <<endl;
        cout << "2. Papel" <<endl;
        cout << "3. Tijeras" <<endl;
        cout << "Elige tu jugada: "; cin >> userChoice;
        if (userChoice < 1 || userChoice > 3) {
            cout << "Elección inválida. Por favor, elige 1, 2 o 3.";
            continue;
        }
        int computerChoice = rand() % (3+1);
        cout << "La computadora eligio: " 
                  << (computerChoice == 1 ? "Piedra" : (computerChoice == 2 ? "Papel" : "Tijeras")) 
                  << "\n";
        if (userChoice == computerChoice) {
            cout << "Fue un empate."<<endl;
        } else if ((userChoice == 1 && computerChoice == 3) || 
                   (userChoice == 2 && computerChoice == 1) || 
                   (userChoice == 3 && computerChoice == 2)) {
            cout << "Ganaste la ronda."<<endl;
            userScore++;
        } else {
            cout << "La computadora gano la ronda."<<endl;
            computerScore++;
        }
        cout << "Puntaje=   Tu: " << userScore <<"  |   Computadora: " << computerScore<<endl;
        cout << "---------------------------------------------------------" <<endl;
    }
    if (userScore == 3) {
        cout << "¡Felicidades, ganasteee!!!!";
    } else {
        cout << "La computadora gano el juego.";
    }
    return 0;
}
