#include <iostream>
using namespace std;

int main() {
	
	int qtd, pos, aux, meio;
	
	cin >> qtd;
	cin >> pos;
	
	meio = qtd / 2;
	
	
	if(pos < meio) {
		aux = 1 + 2 * pos;
	} else {
		aux = 2 * (pos - meio);
	}
	cout << aux;
	return 0;
}
