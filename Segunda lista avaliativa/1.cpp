#include <iostream>
using namespace std;

int main()
{
	
	string nome, disp[8];
	int num, cont = 0;
	
	for(int i = 0;i < 8;i++) {
		disp[i] = "disponivel";
	}
	
	cin >> nome;
	cin >> num;
	
	while(nome != "fim") {
		
		if(disp[num] == "disponivel") {
			disp[num] = nome;
		}else {
			cont++;
		}
		
		cin >> nome;
		cin >> num;
	}
	
	
	for(int i = 0;i < 8;i++) {
		
		cout << disp[i] << endl;
	}
	cout << cont;
	
	
	return 0;
}
