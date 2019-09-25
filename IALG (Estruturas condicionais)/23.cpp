#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	char letra;
	
	cin >> letra;
	
	
	if((letra >= 'a') and (letra <= 'z')) {
		cout << "MINUSCULA";
	} else {
		cout << "MAIUSCULA";
	}
	return 0;
}
