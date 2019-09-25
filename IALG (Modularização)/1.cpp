#include <iostream>
#include <math.h>
using namespace std;

int reverso (int num1) {
	int aux = 0, result, tt = 10, resto, finalera;
	
	while(num1 != result) {
		result = num1 % tt;
		tt *= 10;
		aux++;
	}
	
	while(aux > 0) {
		aux--;
		resto = num1 % 10;
		num1 = num1 / 10;
		
		finalera = finalera + resto * pow(10, aux);
		
	}
	
	return finalera;
}

int main() {
	
	int valor;
	
	cin >> valor;

	cout << reverso(valor);
	return 0;
}
