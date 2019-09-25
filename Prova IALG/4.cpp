#include <iostream>
using namespace std;

int main() {
	
	string tipo;
	int num, tempo;
	
	cin >> tipo >> num >> tempo;
	
	if((tipo == "z") or (tipo == "m")) {
		cout << 1;
	} else if ((tipo == "l") or (tipo == "d")) {
		cout << 2;
	} else if ((tipo == "h") or (tipo == "s")) {
		cout << 3;
	} else if ((tipo == "v") or (tipo == "f")) {
		cout << 4;
	}
	
	if(num == 1) {
		cout << 1;
	} else if(num == 2) {
		cout << 2;
	} else if(num > 2){
		cout << 3;
	}
	
	if((tempo == 1) or (tempo == 2)) {
		cout << 1;
	} else if((tempo == 3) or (tempo == 4)) {
		cout << 2;
	} else if((tempo == 5) or (tempo == 6)) {
		cout << 3;
	} else {
		cout << 4;
	}
	
	
	return 0;
}
