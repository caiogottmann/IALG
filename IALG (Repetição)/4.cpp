#include <iostream>
using namespace std;

int main() {
	
	int a, b, cont = 1;
	string letra;
	
	while(cont <= 10) {
		cin >> letra;
		if(letra == "a") {
			a++;
		} else if(letra == "b") {
			b++;
		}
		cont++;
	}
	
	if(b > a) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
