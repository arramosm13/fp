//Nombre: Alejandra del Rosario Ramos Mamani
#include<iostream>
#include<cmath>
using namespace std;

main(){
	int a, b, c, discriminante, x1, x2;
	cout<<"Ingrese el primer coeficiente, que debe ser un numero real (a): "; cin>>a;
	cout<<"Ingrese el segundo coeficiente, que debe ser un numero real (b): "; cin>>b;
	cout<<"Ingrese el tercer coeficiente, que debe ser un numero real (c): "; cin>>c;
	discriminante = pow(b,2) - 4 * a * c;
	x1 = (-b + sqrt (discriminante))/(2*a);
	x2 = (-b - sqrt (discriminante))/(2*a);
	cout<<"Las raices son:"<<x1<<" y "<<x2<< endl;
	
	if(discriminante>0){
	cout<<"La ecuacion tiene raices complejas.";
	} else {	
	cout<<"La ecuacion tiene raices reales.";
	}
	return 0;
}

