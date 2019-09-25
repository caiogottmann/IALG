#include <iostream>
using namespace std;

int main()
{
	
	int v1[10] = {}, valor, num, n_elem, pos, aux1, aux2, aux3;
	
	cin >> valor;
	
	
	for(int i = 0;i < valor;i++) {
		cin >> num;
		
		v1[i] = num;
		
	}
	
	cin >> n_elem;
	
	cin >> pos;
	
	if(pos == 0) {
		aux1 = valor + 1;
	} else {
		aux1 = valor + pos;
	}
	
	for(int a = 0;a < aux1;a++) {
		
		if(a == pos) {
			
			aux2 = v1[a];
			v1[a] = n_elem;
			
		} else if(a > pos) {
			
			aux3 = v1[a]; 
			v1[a] = aux2;
			aux2 = aux3;
			
		}
		
	}
	
	for(int b = 0;b < 10;b++) {
		cout << v1[b] << " ";
	}
	
	return 0;
}
