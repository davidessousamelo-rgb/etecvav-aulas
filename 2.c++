#include <iostream>
using namespace std;

int potencial(int base, int expoente){
	int resultado = 1;

	for(int i = 1; i <= expoente; i++){
		resultado = resultado * base;
}
	return resultado;

}
int main(){

 int base, expoente;
cout << "Digite o numero da sua base:";
cin >> base;
cout << "Digite o expoente:";
cin >> expoente;

cout << "Resultado = " << potencial(base, expoente);
return 0;

}
