#include <iostream>
using namespace std;

int main()
{
	
	int num_v, busca, i, meio, pos_inicial = 0, pos_final, cont = 0, posicao;
	
	cin >> num_v;
	
	int v[num_v];
	
	for(i = 0;i < num_v;i++) {
		
		cin >> v[i];
		
	}
	
	cin >> busca;
	
	pos_final = num_v--;
	
	while (pos_inicial <= pos_final) {
		meio = (pos_inicial + pos_final)/2;
		if (busca == v[meio]) {
			posicao = meio;
			cont++;
			pos_inicial = pos_final + 1;
		} else{ 
			2 {
				pos_inicial = meio + 1;
			} else {
				pos_final = meio - 1;
			}
			cont++;
		}
	}
	cout << posicao << endl;
	cout << cont << endl;
	
	
	return 0;
}
