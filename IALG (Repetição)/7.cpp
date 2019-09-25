#include <iostream>
using namespace std;

int main() {
	
	int n, aux = 1, divisor = 0, soma = 0;
	
	cin >> n;
	
	if(n >= 2) {
		
		while(aux <= n) {
			if(n % aux == 0) {
				divisor += aux;
				
				if(aux == n) {
					cout << divisor << "=";
				} else {
					cout << divisor << "+";
				}
				
			}
			aux++;
			soma += divisor;
			divisor = 0;
		}
		cout << soma;
		
	}
	
	return 0;
}


