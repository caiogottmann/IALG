#include <iostream>
using namespace std;

void sort (int vetor[], int tam) {
	int menor, aux_troca;
	for (int indice = 0; indice < tam-1; indice++) {
		menor = indice;
		for (int j = indice + 1; j < tam; j++) {
			if (vetor[j] < vetor[menor]){
				menor = j;
			}
		}
		aux_troca = vetor[indice];
		vetor[indice] = vetor[menor];
		vetor[menor] = aux_troca;
	}

}

int main()
{
	
	int num;
	
	cin >> num;
	
	int v[num];
	
	for(int i = 0;i < num;i++) {
		cin >> v[i];
	}
	
	sort(v, num);
	
	for(int i = 0;i < num;i++) {
		cout << v[i] << endl;
	}
	
	
	return 0;
}
