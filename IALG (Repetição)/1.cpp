#include <iostream>
using namespace std;

int main() {
	
	int qtd_ingresso, cont = 1, premiado = 0, ingresso;
	
	cin >> qtd_ingresso;
	
	while(qtd_ingresso > 0) {
		cin >> ingresso;
		if(ingresso == cont) {
			premiado = ingresso;
			qtd_ingresso = 0;
		}
		qtd_ingresso--;
		cont++;
	}
	cout << premiado;
	return 0;
}
