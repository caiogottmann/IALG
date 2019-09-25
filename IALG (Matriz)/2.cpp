#include <iostream>
using namespace std;

int main()
{
	
	int m[10][10], i, j, maior, menor, posi, posj;
	
	for(i = 0;i < 10;i++) {
		
		for(j = 0;j < 10;j++) {
			
			cin >> m[i][j];
			
		}
		
	}
	
	maior = 0;
	
	for(i = 0;i < 10;i++) {
		
		for(j = 0;j < 10;j++) {
			
			if(m[i][j] > maior) {
				
				maior = m[i][j];
				posi = i;
			}
			
		}
		
	}
	
	menor = maior                                                                                                                                                                                                                                           ;
	
	for(j = 0;j < 10;j++) {
		
		if(menor > m[posi][j]) {
			
			menor = m[posi][j];
			posj = j;
		}
		
	}
	
	cout << menor << endl;
	cout << posi << " " << posj;
	
	
	
	return 0;
}
