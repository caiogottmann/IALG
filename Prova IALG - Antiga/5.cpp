#include <iostream>
using namespace std;

int main() {
	
	int n1, n2, aux, divisor = 1, abundante = 0;
	
	cin >> n1 >> n2;
	aux = n1;
	while(aux <= n2) {
		
		while(divisor != aux) {
			if(aux % divisor == 0) {
				abundante += divisor;
			}
			divisor++;
		}
		if(abundante > aux) {
			cout << aux << " ";
		}
		abundante = 0;
		divisor = 1;
		aux++;
	}
	return 0;
}
