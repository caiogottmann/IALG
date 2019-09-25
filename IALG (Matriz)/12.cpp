#include <iostream>
using namespace std;

int main()
{
	
	int n, i, j, c_i, c_j, contador = 0;
	
	cin >> n;
	
	int m[n][n];
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < n;j++) {
			
			cin >> m[i][j];
			
			if(m[i][j] == 1) {
				c_i = i;
				c_j = j;
			}
			
		}
		
	}
	
	n--;
	
	if((c_i - 2) >= 0) {
		
		if((c_j + 1) <= n) {
			
			if(m[c_i - 2][c_j + 1] == 2) {
				contador++;
			}
			
		}
		
		if((c_j - 1) >= 0) {
			
			if(m[c_i - 2][c_j - 1] == 2) {
				contador++;
			}
			
		}
		
	}
	
	if((c_i + 2) <= n) {
		
		if((c_j + 1) <= n) {
			
			if(m[c_i + 2][c_j + 1] == 2) {
				contador++;
			}
			
		}
		
		if((c_j - 1) >= 0) {
			
			if(m[c_i + 2][c_j - 1] == 2) {
				contador++;
			}
			
		}
		
	}
	
	if((c_j - 2) >= 0) {
		
		if((c_i + 1) <= n) {
			
			if(m[c_i + 1][c_j - 2] == 2) {
				contador++;
			}
			
		}
		
		if((c_i - 1) >= 0) {
			
			if(m[c_i - 1][c_j - 2] == 2) {
				contador++;
			}
			
		}
		
	}
	
	if((c_j + 2) <= n) {
		
		if((c_i + 1) <= n) {
			
			if(m[c_i + 1][c_j + 2] == 2) {
				contador++;
			}
			
		}
		
		if((c_i - 1) >= 0) {
			
			if(m[c_i - 1][c_j + 2] == 2) {
				contador++;
			}
			
		}
		
	}
	
	
	cout << contador;
	return 0;
}
