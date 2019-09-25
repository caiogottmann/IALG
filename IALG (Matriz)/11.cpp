#include <iostream>
using namespace std;

int main()
{
	
	int n, i, j;
	float dp = 0.0;
	
	cin >> n;
	
	float v[n][n];
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < n;j++) {
			
			cin >> v[i][j];
			
		}
		
	}
	
	for(i = 0;i < n;i++) {
		
		dp += v[i][i];
		
	}
	
	
	cout << dp / n;
	return 0;
}
