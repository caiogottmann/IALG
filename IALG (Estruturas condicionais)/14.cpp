#include <iostream>
using namespace std;

int main() {
	
	float custo, precof;
	
	cin >> custo;
	
	if(custo <= 20000) {
		precof = custo + (custo * 0.05);
	} else if((custo > 20000) and (custo <= 40000)) {
		precof = custo + (custo * 0.1);
		precof += precof * 0.3;
	} else if(custo > 40000) {
		precof = custo + (custo * 0.15);
		precof += precof * 0.45;
	}
	cout << precof << endl;
}

