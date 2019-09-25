#include <iostream>
using namespace std;

int main() {
	
	int numero, total = 0;
	float media = 0;
	
	cin >> numero;
	
	while(numero >= 0) {
		
		if(numero % 3 == 0) {
			media += numero;
			total++;
		}
		cin >> numero;
	}
	if(media != 0) {
		cout << media / total;
	} else {
	}
	
	
	
	return 0;
}
