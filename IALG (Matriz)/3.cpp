#include <iostream>
using namespace std;

int main()
{
	
	int l, c, i, j, auxi, auxj, cont = 1;
	
	cin >> l >> c;
	
	int v[l][c];
	
	for(i = 0;i < l;i++) {
		
		for(j = 0;j < c;j++) {
			
			cin >> v[i][j];
			
		}
	}
	
	auxi = l - 1;
	
	for(i = auxi;i > -1;i--) {
		
		if(cont % 2 == 0) {
			auxj = c - 1;
			for(j = auxj;j > -1;j--) {
				
				cout << v[i][j] << " ";
				
			}
			cont++;
			
		} else {
			
			for(j = 0;j < c;j++) {
				
				cout << v[i][j] << " ";
				
			}
			cont++;
			
		}
		
	}
	
	return 0;
}
