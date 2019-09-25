#include <iostream>
#include <math.h>
using namespace std;

int reverso (int num1) {
	int aux = 0, result, tt = 10, resto, finalera, antigo;
	
	antigo = num1;
	
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
	
	if(antigo == finalera) {
		return true;
	} else {
		return false;
	}
}

int main() {
	
	int valor;
	
	cin >> valor;
	if(reverso(valor)) {
		cout << "sim";
	} else {
		cout << "nao";
	}
	return 0;
}

