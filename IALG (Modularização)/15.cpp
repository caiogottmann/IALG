
#include <iostream>
#include <math.h>
using namespace std;

int somatoria (int num) {
	int result, aux = 1, pot = 1;
	
	while(num >= aux) {
		
		if(pot > 3) {
			pot = 1;
		}
		
		if(aux % 2 == 0) {
			result -= pow(aux,pot);
		} else {
			result += pow(aux,pot);
		}
		
		pot++;
		aux++;
	}
	
	return result;
}

int main() {
	
	int valor = -1;
	
	while(valor <= 0) {
		cin >> valor;
	}
	
	cout << somatoria(valor);
	
	return 0;
}
