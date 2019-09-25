#include <iostream>
#include <math.h>
using namespace std;


int soma_harshad(int);
bool harshad (int numero) {
	
	if(numero % soma_harshad(numero) == 0) {
		return true;
	} else {
		return false;
	}
}

int soma_harshad (int numero) {
	int result, s_harshad = 0;
	
	while(numero != 0) {
		result = numero % 10;
		numero = numero / 10;
		s_harshad += result;
	}
	return s_harshad;
}


int main() {
	int num;
	
	cin >> num;
	
	if(harshad(num)) {
		cout << "True";
	} else {
		cout << "False";
	}

	return 0;
}
