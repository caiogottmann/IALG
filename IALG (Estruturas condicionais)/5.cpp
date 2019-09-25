#include <iostream>
using namespace std;

int main() {
	
	int dia1, mes1, ano1, dia2, mes2, ano2;
	
	cin >> dia1;
	cin >> mes1;
	cin >> ano1;
	
	cin >> dia2;
	cin >> mes2;
	cin >> ano2;
	
	
	if(ano1 > ano2) {
		cout << dia1 <<" "<< mes1 <<" "<< ano1;
	} else if(ano2 > ano1) {
		cout << dia2 <<" "<< mes2 <<" "<< ano2;
	} else {
		if(mes1 > mes2) {
			cout << dia1 <<" "<< mes1 <<" "<< ano1;
		} else if(mes2 > mes1) {
			cout << dia2 <<" "<< mes2 <<" "<< ano2;
		} else {
			if(dia1 > dia2) {
				cout << dia1 <<" "<< mes1 <<" "<< ano1;
			} else if(dia2 > dia1) {
				cout << dia2 <<" "<< mes2 <<" "<< ano2;
			}
		}
	}
}

