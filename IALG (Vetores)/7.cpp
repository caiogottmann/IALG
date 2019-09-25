#include <iostream>
using namespace std;

int main()
{
	
	int aux, n_vetor, num, contador = 0, fim = 0;
	
	cin >> n_vetor;
	aux = n_vetor--;
	
	int busca[aux];
	
	
	while (contador <= n_vetor) {
		cin >> num;
		
		busca[contador] = num;
		
		contador++;
	}
	
	for(int i = 0;i < aux;i++) {
		
		
		if(busca[i] == busca[n_vetor]) {
			fim++;
		}
		n_vetor--;
	}

	
	if(aux == fim) {
		cout << 1;
	} else {
		cout << 0;
	}
	
	
	return 0;
}
