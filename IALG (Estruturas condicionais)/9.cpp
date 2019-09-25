#include <iostream>
using namespace std;

int main() {
	
	float salario, aumento;
	
	cin >> salario;
	
	if(salario <= 300.00) {
		aumento = salario * 0.15;
		salario += aumento;
		cout << aumento << endl;
		cout << salario;
	} else if ((salario > 300.00) and (salario <= 600.00)) {
		aumento = salario * 0.1;
		salario += aumento;
		cout << aumento << endl;
		cout << salario;
	} else if ((salario > 600.00) and (salario <= 900.00)) {
		aumento = salario * 0.05;
		salario += aumento;
		cout << aumento << endl;
		cout << salario;
	} else if (salario > 900.00) {
		aumento = salario * 0;
		salario += aumento;
		cout << aumento << endl;
		cout << salario;
	}
}
