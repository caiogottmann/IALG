#include <iostream>
using namespace std;

int main() {
	
	int codigo;
	float salario, aumento;
	
	cin >> codigo;
	cin >> salario;
	
	
	if(codigo == 1) {
		cout << "Escriturario" << endl;
		aumento = salario * 0.5;
		cout << aumento << endl;
		salario += aumento;
		cout << salario << endl;
	} else if(codigo == 2) {
		cout << "Secretario" << endl;
		aumento = salario * 0.35;
		cout << aumento << endl;
		salario += aumento;
		cout << salario << endl;
	} else if(codigo == 3) {
		cout << "Caixa" << endl;
		aumento = salario * 0.2;
		cout << aumento << endl;
		salario += aumento;
		cout << salario << endl;
	} else if(codigo == 4) {
		cout << "Gerente" << endl;
		aumento = salario * 0.1;
		cout << aumento << endl;
		salario += aumento;
		cout << salario << endl;
	} else if(codigo == 5) {
		cout << "Diretor" << endl;
		aumento = salario * 0;
		cout << aumento << endl;
		salario += aumento;
		cout << salario << endl;
	}
	
}
