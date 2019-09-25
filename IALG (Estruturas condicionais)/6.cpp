#include <iostream>
using namespace std;

int main() {
	
	int dia, hora, min, duracao;
	
	cin >> dia;
	cin >> hora;
	cin >> min;
	cin >> duracao;
	
	min += duracao;
	if(min >= 60) {
		hora += min / 60;;
		min = min % 60;
	}
	
	if(hora >= 24) {
		dia += hora / 24;
		hora = hora % 24;
	}
	
	cout << dia <<" "<< hora <<" "<< min;
	
}
