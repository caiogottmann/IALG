#include <iostream>
using namespace std;

int main()
{
	
	int l, c, i, j;
	
	cin >> l >> c;
	
	int v[l][c];
	
	for(i = 0;i < l;i++) {
		
		for(j = 0;j < c;j++) {
			
			cin >> v[i][j];
			
		}
		
	}
	
	
	for(i = 0;i < c;i++) {
		
		for(j = 0;j < l;j++) {
			
			cout << v[j][i] << " ";
			
		}
		cout << endl;
		
	}
	
	return 0;
}
