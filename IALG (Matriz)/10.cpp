#include <iostream>
using namespace std;

int main()
{
	
	int n, m, i, j;
	
	cin >> n >> m;
	
	float v[n][m], l, c, soma = 0;
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < m;j++) {
			
			cin >> v[i][j];
			
		}
		
	}
	
	cin >> l >> c;
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < m;j++) {
			
			if(i % 2 == 0) {
				v[i][j] *= l;
			}
			
			if(!(j % 2 == 0)) {
				v[i][j] *= c;
			}
			
		}
		
	}
	
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < m;j++) {
			
			soma += v[i][j];
			
		}
		
	}
	cout << soma;
	
	return 0;
}
