//Nombre: Alejandra del Rosario Ramos Mamani
#include <iostream>
#include <cmath>
using namespace std;
double calcularArea(double a);

int main() {
    int r;
    cout<<"Ingrese el radio: "; cin>>r;
    cout<<"El area del circulo es :"<<calcularArea(r)<<endl;
    return 0;
}

double calcularArea(double a){
	double area;
	area = M_PI * pow (a,2);
	return area;
}
