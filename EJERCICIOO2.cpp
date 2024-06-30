//Nombre: Alejandra del Rosario Ramos Mamani
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
int main() {
    int nro, mn, mx;
	cout<<"Ingrese la cantidad de numeros aleatorios que deseas generar: "; cin>> nro;
    cout<< "Introduce el valor minimo permitido para los numeros aleatorios: "; cin >> mn;
	cout<< "Introduce el valor maximo permitido para los numeros aleatorios: "; cin >> mx;
    srand (time(0));
    cout << "Numeros aleatorios generados:";
    for (int i = 0; i < nro; ++i) {
        int num_aleatorios = mn + rand() % (mx + 1);
        cout << num_aleatorios << " ";
    }
    return 0;
}
