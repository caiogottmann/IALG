#include <iostream>
using namespace std;

int main()
{
	
	int v1[7], v2[7], aux = 0, contador = 0, num, multi = 1;
	
	
	while (contador < 7) {
		cin >> num;
		
		v1[contador] = num;
		
		contador++;
	}
	
	cin >> num;
	contador = 0;
	
	while ((contador <= 6) and (num >= 0)) {
		
		v2[contador] = num;
		
		contador++;
		aux++;
		
		cin >> num;
	}
	
	for(int i = 0;i < aux;i++) {
		
		multi *= v1[v2[i]];
		
	}
	
	cout << multi;
	
	
	return 0;
}
