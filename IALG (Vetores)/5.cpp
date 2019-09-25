#include <iostream>
using namespace std;

int main()
{
	
	int n_vetor, num, posicao, aux, contador = 0;
	
	cin >> n_vetor;
	aux = n_vetor--;
	
	int busca[aux];
	
	
	while (contador <= n_vetor) {
		cin >> num;
		
		busca[contador] = num;
		
		contador++;
	}
	
	cin >> posicao;
	posicao++;
	
	for(int i = posicao; i < aux; i++) {
		cout << busca[i] << " ";
	}
	
	for(int a = 0; a < posicao; a++) {
		cout << busca[a] << " ";
	}
	return 0;
}
