#include <iostream>
using namespace std;

int main()
{
	
	int soma = 0, aux;
	string palavra;
	
	cin >> palavra;
	aux = palavra.size();
	
	for(int i = 0;i < aux;i++) {
		
		if((palavra[i] == 'a') or (palavra[i] == 'e') or (palavra[i] == 'i') or (palavra[i] == 'o') or (palavra[i] == 'u')) {
			soma++;
		}
		
	}
	
	cout << soma;
	
	return 0;
}
