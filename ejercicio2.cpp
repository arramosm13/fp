#include <iostream>
using namespace std;

void porValor (int a) {
	a=10;
	cout<<"Dentro de porValor, a="<<a<<endl;
}
void porReferencia (int&a){
	a=10;
	cout<<"Dentro de porReferencia, a="<<a<<endl;
}
int main(){
	int num=5;
	cout<<"Antes de pasar por Valor, num="<<num<<endl;
	porValor(num);
	cout<<"Luego de pasar por Valor, num="<<num<<endl;
	
	cout<<"Antes de pasar por Referencia, num="<<num<<endl;
	porReferencia(num);
	cout<<"Luego de pasar por Referencia, num="<<num<<endl;
	
	return 0;
}

