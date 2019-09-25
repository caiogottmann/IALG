#include <iostream>
using namespace std;

int main()
{
	
	int n, i, j, cont_dp = 0, cont_ds = 0;
	float dp = 0, ds = 0;
	
	cin >> n;
	
	int m[n][n];
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < n;j++) {
			
			cin >> m[i][j];
			
		}
		
	}
	
	for(i = 0;i < n;i++) {
		
		for(j = 0;j < n;j++) {
			
			if(i >= j) {
				dp += m[i][j];
				cont_dp++;
			}
			if((i+j) > n - 2) {
				ds += m[i][j];
				cont_ds++;
			}
			
		}
		
	}
	
	
	cout << dp / cont_dp << endl;
	cout << ds / cont_ds << endl;
	return 0;
}
