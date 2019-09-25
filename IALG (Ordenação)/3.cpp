#include <iostream>
using namespace std;

void sort_cresc (int vetor[], int tam) {
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

void sort (int vetor[], int tam, int meio) {
	int aux_troca, maior;
	for (int indice = (tam - 1); indice > meio; indice--) {
		maior = indice;
		for (int j = indice - 1; j > meio; j--) {
			if (vetor[j] > vetor[maior]){
				maior = j;
			}
		}
		aux_troca = vetor[indice];
		vetor[indice] = vetor[maior];
		vetor[maior] = aux_troca;
		
	}
}

int main()
{
	
	int num, meio;
	
	cin >> num;
	
	int v[num];
	
	if(num % 2 == 0) {
		meio = (num / 2) - 1;
	} else {
		meio = (num / 2) + 1;
	}
	
	for(int i = 0;i < num;i++) {
		
		cin >> v[i];
		
	}
	
	
	sort_cresc(v, meio);
	
	for(int i = 0;i <= meio;i++) {
		cout << v[i] << " ";
	}
	
	sort(v, num, meio);
	
	for(int i = (num - 1);i > meio;i--) {
		cout << v[i] << " ";
	}
	
	
	return 0;
}
