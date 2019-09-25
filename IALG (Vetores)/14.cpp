#include <iostream>
using namespace std;

int main()
{
	
	int tam, aux = 0;
	string seq, busca;
	
	cin >> tam;
	
	string v1[tam];
	
	for(int i = 0;i < tam;i++) {
		
		cin >> seq;
		
		v1[i] = seq;
		
	}
	
	cin >> busca;
	
	for(int b = 0;b < tam;b++) {
		
		if((v1[b] == busca) and (aux == 0)) {
			
			cout << b;
			
			aux++;
			
		}
		
	}
	
	if(aux == 0) {
		cout << -1;
	}
	
	return 0;
}
