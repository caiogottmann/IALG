#include <iostream>
using namespace std;

int main()
{
	
	int v[3][3], i, j, l = 0, c = 0, dp = 0, ds = 0, result = 0;
	
	for(i = 0;i < 3;i++) {
		
		for(j = 0;j < 3;j++) {
			
			cin >> v[i][j];
			
		}
		
	}
	
	for(i = 0;i < 3;i++) {
		
		for(j = 0;j < 3;j++) {
			
			if(v[i][j] == 0) {
				l -= 6;
			} else {
				l += v[i][j];
			}
			
			if(v[j][i] == 0) {
				c -= 6;
			} else {
				c += v[j][i];
			}
			
			if(i == 0) {
				
				if(v[j][i+j] == 0) {
					dp -= 6;
				} else {
					dp += v[j][i+j];
				}
				
				if(v[j][i+j] == 0) {
					ds -= 6;
				} else {
					ds += v[j][2-j];
				}
				
			} 
			
		}
		
		
		
		if(l == 3) {
			result = 1;
		} else if(l == 6) {
			result = 2;
		}
		
		if(c == 3) {
			result = 1;
		} else if(c == 6) {
			result = 2;
		}
		
		if(dp == 3) {
			result = 1;
		} else if(dp == 6) {
			result = 2;
		}
		
		if(ds == 3) {
			result = 1;
		} else if(ds == 6) {
			result = 2;
		}
		
		l = 0;
		c = 0;
		
	}
	
	cout << result;
	
	return 0;
}
