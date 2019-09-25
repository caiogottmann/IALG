#include <iostream>
using namespace std;

int main()
{
	
	string palavra;
	int aux, soma = -1;
	bool n_existe = true;
	
	cin >> palavra;
	
	aux = palavra.size();
	
	for(int i = 0;i < aux;i++) {
		
		
		for(int a = 0;a < aux;a++) {
			if(palavra[i] == palavra[a]) {
				soma++;
			}
		}
		if((soma == 0) and (n_existe)) {
			cout << palavra[i];
			n_existe = false;
		}
		soma = -1;
		
	}
	
	return 0;
}
