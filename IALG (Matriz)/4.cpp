#include <iostream>
using namespace std;

int main()
{
	
	int l, c, i, j, nota = 0, contador = 0;
	
	cin >> l >> c;
	
	string gabarito[l][c], prova[l][c];
	
	
	for(i = 0;i < l;i++) {
		
		for(j = 0;j < c;j++) {
		
		cin >> gabarito[i][j];
		
		}
		
	}
	
	for(i = 0;i < l;i++) {
		
		for(j = 0;j < c;j++) {
		
		cin >> prova[i][j];
		
		}
		
	}
	
	for(i = 0;i < l;i++) {
		
		for(j = 0;j < c;j++) {
			
			if(gabarito[i][j] == prova[i][j]) {
				contador++;
			}
			
		}
		
		if(contador == c) {
			
			nota++;
			
		}
		contador = 0;
		
	}
	
	cout << nota;
	
	return 0;
}
