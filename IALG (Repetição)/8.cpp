#include <iostream>
using namespace std;

int main() {
	
	int fatorial, aux;
	
	cin >> fatorial;
	aux = fatorial;
	
	if((fatorial == 0) or (fatorial == 1)) {
		fatorial = 1;
	} else {
		while(aux > 1) {
			aux--;
			fatorial *= aux;
		}
	}
	cout << fatorial;
	return 0;
}
