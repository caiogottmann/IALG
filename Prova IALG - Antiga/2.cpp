#include <iostream>
using namespace std;

int main() {
	
	int i, j, cycle = 1, aux, maior = 0;
	
	cin >> i >> j;
	
	while(i <= j) {
		
		aux = i;
		while (aux != 1) {
			cycle++;
			if(aux % 2 == 0) {
				aux /= 2;
			} else {
				aux = (aux*3) + 1;
			}
		}
		i++;
		if(cycle > maior) {
			maior = cycle;
		}
		cycle = 1;
		
	}
	cout << maior;
	return 0;
}
