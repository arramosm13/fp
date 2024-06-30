//Nombre: Alejandra del Rosario Ramos Mamani
#include <iostream>
#include <cmath>
using namespace std;
double hipotenusa(int a, int b);

int main() {
    int c1, c2;
    cout<<"Ingrese el primer cateto: "; cin>>c1;
    cout<<"Ingrese el segundo cateto: "; cin>>c2;
    if (c1==0 || c2==2){
    	cout<<"Ningun cateto puede ser 0."<<endl;
	}else{
    cout<<"La hipotenusa es :"<<hipotenusa (c1, c2)<<endl;
    return 0;
	}
}

double hipotenusa(int a, int b){
	double hipotenusa;
	hipotenusa = sqrt ((pow (a,2)) + (pow (b,2)));
	return hipotenusa;
}
