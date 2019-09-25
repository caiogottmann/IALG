#include <iostream>
using namespace std;

int main()
{
	
	int bingo[5][5], i, j, bingol = 0, bingoc = 0, bingodp = 0, bingods = 0, result = -1;
	for(i = 0;i < 5;i++) {
		
		for(j = 0;j < 5;j++) {
			
			cin >> bingo[i][j];
			
		}
		
	}
	
	for(i = 0;i < 5;i++) {
		
		for(j = 0;j < 5;j++) {
			
			bingol += bingo[i][j];
			bingoc += bingo[j][i]; 
			
			if(i == 0) {
				
				bingodp += bingo[j][i+j];
				bingods += bingo[j][4-j];
				
			}
			
		}
		
		if(bingol == 5) {
			result = 1;
		} else if(bingoc == 5) {
			result = 2;
		} else if(bingodp == 5) {
			result = 3;
		} else if(bingods == 5) {
			result = 4;
		}
		bingol = 0;
		bingoc = 0;
		bingodp = 0;
		bingods = 0;
		
	}
	
	cout << result;
	
	return 0;
}
