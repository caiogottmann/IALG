#include <iostream>
using namespace std;

int antecessor (int valor) {
	
	valor--;
	
	return valor;
}

int sucessor (int valor) {
	
	valor++;
	
	return valor;
}

int main() {
	
	int valor;
	
	cin >> valor;

	cout << antecessor(valor) << " ";
	cout << valor << " ";
	cout << sucessor(valor);
	return 0;
}
