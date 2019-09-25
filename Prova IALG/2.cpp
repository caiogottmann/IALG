#include <iostream>
using namespace std;

int main() {
	
	int carga, qtd_cavalo, qtd_vaca, qtd_galinha, peso_cavalo,
	 peso_vaca, peso_galinha, aux;
	
	cin >> carga;
	cin >> qtd_cavalo;
	cin >> qtd_vaca;
	cin >> qtd_galinha;
	
	peso_cavalo = qtd_cavalo * 250;
	peso_vaca = qtd_vaca * 150;
	peso_galinha = qtd_galinha * 2;
	
	
	if(peso_galinha <= carga) {
		carga -= peso_galinha;
		qtd_galinha = 0;
	} else {
		aux = qtd_galinha;
		while(aux > 0) {
			if((aux * 2) <= carga) {
				carga -= aux * 2;
				qtd_galinha -= aux;
				aux = 0;
			}
			aux--;
		}
	}
	
	if(peso_vaca <= carga) {
		carga -= peso_vaca;
		qtd_vaca = 0;
	} else {
		aux = qtd_vaca;
		while(aux > 0) {
			if((aux * 150) <= carga) {
				carga -= aux * 150;
				qtd_vaca -= aux;
				aux = 0;
			}
			aux--;
		}
	}
	
	if(peso_cavalo <= carga) {
		carga -= peso_cavalo;
		qtd_cavalo = 0;
	} else {
		aux = qtd_cavalo;
		while(aux > 0) {
			if((aux * 250) <= carga) {
				carga -= aux * 250;
				qtd_cavalo -= aux;
				aux = 0;
			}
			aux--;
		}
	}
	
	cout << qtd_cavalo <<endl;
	cout << qtd_vaca <<endl;
	cout << qtd_galinha <<endl;
	
	return 0;
}
