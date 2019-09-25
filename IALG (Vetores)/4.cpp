#include <iostream>
using namespace std;

int main()
{
	int v1[10], v2[5], num, contador = 0, div = 0;
	
	while (contador < 10) {
		cin >> num;
		
		v1[contador] = num;
		
		contador++;
	}
	
	contador = 0;
	
	while (contador < 5) {
		cin >> num;
		
		v2[contador] = num;
		
		contador++;
	}
	
	for(int i = 0; i < 10; i++) {
		
		for(int a = 0; a < 5; a++) {
			
			if(v1[i] % v2[a] == 0) {
				div++;
			}
			
		}
		
		cout << v1[i] <<" " << div << endl;
		div = 0;
		
	}
	return 0;
}
