#include <iostream>
using namespace std;

int main() {
	
	int lado1, lado2, lado3;
	
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;
	
	
	if((lado1 < (lado2+lado3)) and ((lado2 < (lado1+lado3))) and ((lado3 < (lado1+lado2)))) {
		if((lado1 == lado2) and (lado2 == lado3)) {
			cout << "equilatero";
		} else if ((lado1 == lado2) or (lado2 == lado3) or (lado3 == lado1)) {
			cout << "isosceles";
		} else {
			cout << "escaleno";
		}
	} else {
		cout << -1;
	}
}
