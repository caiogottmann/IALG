#include <iostream>
#include <math.h>
using namespace std;

float metro(float distancia) {
	float resultado;
	
	resultado = distancia / 100;
	
	return resultado;
}

float centimetro(float distancia) {
	float resultado;
	
	resultado = distancia * 100;
	
	return resultado;
}


int main() {
	
	float dist;
	string unidade;
	
	cin >> dist;
	cin >> unidade;
	
	if(unidade == "centimetro") {
		
		cout << centimetro(dist) << " cm";
		
	} else if(unidade == "metro") {
		
		cout << metro(dist) << " m";
		
	} else {
		cout << "ERRO";
	}

	return 0;
}
