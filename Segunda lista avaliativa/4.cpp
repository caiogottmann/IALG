#include <iostream>
using namespace std;

int main()
{
	
	int num, dist, pos_i, pos_j, soma = 0;
	
	cin >> num;
	
	int m[num][num];
	
	pos_i = (num - 1) / 2;
	pos_j = (num - 1) / 2;
	
	cin >> dist;
	
	
	for(int i = 0;i < num;i++) {
		
		for(int j = 0;j < num;j++) {
			
			cin >> m[i][j];
			
		}
		
	}
	
	for(int i = 0;i < num;i++) {
		
		for(int j = 0;j < num;j++) {
			
			if((i == (pos_i - dist)) or (i == (pos_i + dist))) {
				
				if((j > (pos_j - dist)) and (j < (pos_j + dist))) {
					soma += m[i][j];
				}
				
			}
			
			if((i == (pos_i - dist)) or (i == (pos_i + dist))) {
				
				if((j >= (pos_j - dist)) and (j <= (pos_j + dist))) {
					soma += m[j][i];
				}
				
			}
			
		}
		
	}
	
	cout << soma;
	
	return 0;
}
