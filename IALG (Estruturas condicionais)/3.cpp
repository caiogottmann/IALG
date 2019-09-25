#include <iostream>
using namespace std;

int main() {
	
	int codigo;
	float inicial, renda = 0;
	
	cin >> codigo;
	cin >> inicial;
	
	renda = inicial;
	
	if(codigo == 1) {
		renda += inicial * (0.5/100);
		cout << renda;
	} else {
		renda += (inicial * (0.03)) - 30;
		cout << renda;
	}
	
}

