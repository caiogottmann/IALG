#include <iostream>
using namespace std;

void shellSort(int vet[], int size, int gaps[], int pos_gap) {
	
	while(gaps[pos_gap] > size) {
		pos_gap--;
	}
	
	int gap = gaps[pos_gap];
	int valor;
	int j;
	
	while(pos_gap >= 0) {
		
		for(int i = gap;i < size;i++) {
			valor = vet[i];
			j = i;
			
			while((j >= gap) and (valor < vet[j - gap])) {
				vet[j] = vet[j - gap];
				j = j - gap;
			}
			vet[j] = valor;
		}
		pos_gap--;
		gap = gaps[pos_gap];
	}
}

int main()
{
	int tam, pos_gap;
	
	cin >> tam;
	
	int vet[tam];
	
	for(int i = 0;i < tam;i++) {
		cin >> vet[i]; 
	}
	
	cin >> pos_gap;
	
	int gaps[pos_gap];
	
	for(int i = 0;i < pos_gap;i++) {
		cin >> gaps[i]; 
	}
	
	shellSort(vet, tam, gaps, pos_gap);
	
	for(int i = 0;i < tam;i++) {
		cout << vet[i] << " "; 
	}
	
	return 0;
}
