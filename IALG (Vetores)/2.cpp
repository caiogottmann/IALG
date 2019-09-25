#include <iostream>
using namespace std;

int main()
{
	
	float numeros[10], num, soma = 0;
	int contador = 0, negativo = 0;
	
	while (contador < 10) {
		cin >> num;
		
		numeros[contador] = num;
		
		contador++;
	}
	
	for(int i = 0; i < 10; i++) {
		
		if(numeros[i] >= 0) {
			soma += numeros[i];
		} else {
			negativo++;
		}
	}
	
	cout << negativo << endl;
	cout << soma;
	
	return 0;
}
