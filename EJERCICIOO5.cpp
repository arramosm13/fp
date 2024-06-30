//Nombre: Alejandra del Rosario Ramos Mamani
#include <iostream>
#include <cmath> 
#include <complex> // Para raíces complejas
using namespace std;
void calcularRaices(double a, double b, double c, complex<double>& raiz1, complex<double>& raiz2, bool& sonReales) {
    double discriminante = pow(b,2) - 4 * a * c;

    if (discriminante >= 0) {
        sonReales = true;
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        sonReales = false;
        raiz1 = complex<double>(-b / (2 * a), sqrt(-discriminante) / (2 * a));
        raiz2 = complex<double>(-b / (2 * a), -sqrt(-discriminante) / (2 * a));
    }
}

int main() {
    double a, b, c;
    complex<double> raiz1, raiz2;
    bool sonReales;
	cout<<"Ingrese el primer coeficiente (a): "; cin>>a;
	cout<<"Ingrese el segundo coeficiente (b): "; cin>>b;
	cout<<"Ingrese el tercer coeficiente (c): "; cin>>c;
	
    if (a == 0) {
        cout << "El coeficiente 'a' no debe ser cero.\n";
        return 1;
    }
    calcularRaices(a, b, c, raiz1, raiz2, sonReales);
    if (sonReales) {
        cout << "Las raices son reales:\n";
        cout << "Raiz 1: " << raiz1 << "\n";
    	cout << "Raiz 2: " << raiz2 << "\n";
    } else {
        cout << "Las raices son complejas:\n";
        cout << "Raiz 1: " << raiz1 << "\n";
        cout << "Raiz 2: " << raiz2 << "\n";
    }

    return 0;
}
