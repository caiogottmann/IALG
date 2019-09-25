#include <iostream>

using namespace std;

int main()
 {
	int valor;
	int nota;
	int resto;
	cin >> valor;
	
	nota = valor / 100;
	resto = valor - (nota*100);
	cout << nota << endl;
	
	nota = resto / 50;
	resto = resto - (nota*50);
	cout << nota << endl;
	
	nota = resto / 20;
	resto = resto - (nota*20);
	cout << nota << endl;
	
	nota = resto / 10;
	resto = resto - (nota*10);
	cout << nota << endl;
	
	nota = resto / 5;
	resto = resto - (nota*5);
	cout << nota << endl;
	
	nota = resto / 2;
	resto = resto - (nota*2);
	cout << nota << endl;
	
	nota = resto / 1;
	resto = resto - (nota*1);
	cout << nota << endl;
	
   
	return 0;
}
