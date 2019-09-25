#include <iostream>
using namespace std;

int main()
{
	
	int positivo[8], num,CP = 0, CN = 0, negativo[8], contador = 1;
	
	
	while (contador <= 8) {
		cin >> num;
		if(num >= 0) {
			positivo[CP] = num;
			CP++;
		} else {
			negativo[CN] = num;
			CN++;
		}
		contador++;
	}
	
	for(int i = 0; i < CP; i++) {
		cout << positivo[i] << " ";
	}
	
	cout << endl;
	
	for(int a = 0; a < CN; a++) {
		cout << negativo[a] << " ";
	}
	
	return 0;
}
