#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int num, m;
	bool igual = true;
	
	ifstream arquivo;
	arquivo.open("matriz.txt");
	
	if(arquivo) {
		
		arquivo >> num;
		
		int a[num][num];
		
		while(arquivo >> m) {
			
			for(int i = 0;i < num;i++) {
				
				for(int j = 0;j < num;j++) {
					
					a[i][j] = m;
					
				}
				
			}
			
		}
		
		
		for(int i = 0;i < num;i++) {
			
			for(int j = 0;j < num;j++) {
				
				if(a[i][j] != a[j][i]) {
					igual = false;
					cout << "entrou";
				}
				
			}
			
		}
	}
	
	
	if(igual) {
		cout << "simetrica";
	} else {
		cout << "nao simetrica";
	}
	arquivo.close();
	
	return 0;
}
