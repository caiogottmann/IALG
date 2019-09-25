#include <iostream>
using namespace std;

int main() {
	
	int num1, unidade, dezena, centena, milhar, dezmilhar;
	
	cin >> num1;
	
	
	if((num1/100000) % 10) {
		cout << "invalido" << endl;
	} else {
		dezmilhar = (num1/1) % 10;
		milhar = (num1/10) % 10;
		centena = (num1/100) % 10;
		dezena = (num1/1000) % 10;
		unidade = (num1/10000) % 10;
		
		cout << unidade << "..." << dezena << "..." << centena << "..." << milhar << "..." << dezmilhar;
	}
}
