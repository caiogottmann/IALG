#include <iostream>
#include <math.h>
using namespace std;

void fibonacci (int limite) {
	
	int aux, n1=0, n2=1;
	cout << n1 << " ";
	while (limite > 1)
	{
		cout << n2 << " ";
		aux = n2;
		n2 += n1;
		n1 = aux;
		limite--;
	}
}

int main() {
	
	int valor;
	
	cin >> valor;

	fibonacci(valor);
	
	return 0;
}
