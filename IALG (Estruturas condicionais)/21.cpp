#include <iostream>
using namespace std;

int main() {
	
	int tempo;
	float salario, imposto, gratificacao, salariol;
	
	cin >> salario;
	cin >> tempo;
	
	
	if(salario < 200.00) {
		imposto = 0;
	} else if((salario >= 200.00) and (salario <= 450.00)) {
		imposto = salario * 0.03;
	} else if((salario > 450.00) and (salario < 700.00)) {
		imposto = salario * 0.08;
	} else if(salario >= 700.00) {
		imposto = salario * 0.12;
	}
	
	cout << imposto << endl;
	
	if((salario > 500.00) and (tempo <= 3)) {
		gratificacao = salario * 0.2;
	} else if(salario > 500.00){
		gratificacao = salario * 0.3;
	} else if((salario <= 500.00) and (tempo < 3)){
		gratificacao = salario * 0.23;
	} else if((tempo >= 3) and (tempo < 6)){
		gratificacao = salario * 0.35;
	} else {
		gratificacao = salario * 0.33;
	}
	
	cout << gratificacao << endl;
	
	salariol = salario - imposto + gratificacao;
	cout << salariol << endl;
	
	if(salariol < 350.00) {
		cout << "A";
	} else if((salariol >= 350.00) and (salariol < 600.00)) {
		cout << "B";
	} else {
		cout << "C";
	}
}

