#include <iostream>
using namespace std;

int main() {
	
	int codigo, qtd;
	float precount, preco, desconto;
	
	cin >> codigo;
	cin >> qtd;
	
	if(codigo <= 10) {
		precount = 10.00;
	} else if((codigo >= 11) and (codigo <= 20)) {
		precount = 15.00;
	} else if((codigo >= 21) and (codigo <= 30)) {
		precount = 20.00;
	} else if((codigo >= 31) and (codigo <= 40)) {
		precount = 30.00;
	}
	
	preco = precount * qtd;
	
	if(preco < 250.00) {
		desconto = preco * 0.05;
	} else if((preco >= 250.00) and (preco <= 500.00)) {
		desconto = preco * 0.1;
	} else if(preco > 500.00) {
		desconto = preco * 0.15;
	}
	
	cout << precount << endl;
	cout << preco << endl;
	cout << desconto << endl;
	cout << preco - desconto << endl;
}
