#include <iostream>

using namespace std;

int main()
 {
	int cliente;
	int compra;
	int troco;
	int nota;
   
	cin >> cliente;
	cin >> compra;

   
	troco = cliente - compra;
	
	
	nota = troco / 20;
	troco = troco - (nota*20);
	cout << nota << endl;
	
	nota = (troco / 10);
	troco = troco - (nota*10);
	cout << nota << endl;
	
	nota = (troco / 5);
	troco = troco - (nota*5);
	cout << nota << endl;
	
	nota = (troco / 2);
	troco = troco - (nota*2);
	cout << nota << endl;
	
	nota = (troco / 1);
	troco = troco - (nota*1);
	cout << nota << endl;
	
   
	return 0;
}
