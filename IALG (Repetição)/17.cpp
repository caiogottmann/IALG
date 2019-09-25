#include <iostream>
using namespace std;

int main() {
	
	int i, j, primeiro, cycle = 1, aux = 1, n, maior = 0;
	
	cin >> i;
	cin >> j;
	
	//fazer if para ver qual é maior
	primeiro = j - i;
	
	n = primeiro;
	while(aux <= primeiro) {
		
		while(n != 1) {
			cycle++;
			if(n % 2 == 0) {
				n /= 2;
			} else {
				n *= 3;
				n++;
			}
		}
		
		if(cycle > maior) {
			maior = cycle;
		}
		cycle = 1;
		n = primeiro - aux;
		aux++;
	}
	
	cout << maior << endl;
	return 0;
}
