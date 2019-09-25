#include <iostream>
#include <math.h>
using namespace std;

void piramide (int num1) {
	int aux = 0, piram = 1;
	
	while(num1 > aux) {
		aux++;
		
		while(piram <= aux) {
			cout << piram << " ";
			piram++;
		}
		cout << endl;
		piram = 1;
	}
}

int main() {
	
	int valor;
	
	cin >> valor;
	
	piramide(valor);
	
	return 0;
}
