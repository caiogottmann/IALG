#include <iostream>
using namespace std;

void sort (int vetor[], int tam) {
	int aux_troca, maior;
	for (int indice = (tam - 1); indice > 0; indice--) {
		maior = indice;
		for (int j = indice - 1; j > -1; j--) {
			if (vetor[j] > vetor[maior]){
				maior = j;
			}
		}
		aux_troca = vetor[indice];
		vetor[indice] = vetor[maior];
		vetor[maior] = aux_troca;
		
		for(int i = 0;i < tam;i++) {
			cout << vetor[i] << " ";
		}
		cout << endl;
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
	
	
	return 0;
}
