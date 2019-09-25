#include <iostream>
using namespace std;

struct criancas {
	
	string nome;
	string presente;
	int boa;
	int ruim;
	
};

int main()
{
	
	int n;
	bool ninguem = true;
	
	cin >> n;
	
	criancas crianca[n];
	
	for(int i = 0;i < n;i++) {
		
		cin >> crianca[i].nome;
		cin >> crianca[i].presente;
		cin >> crianca[i].boa;
		cin >> crianca[i].ruim;
		
	}
	
	for(int i = 0;i < n;i++) {
		
		if((crianca[i].boa - crianca[i].ruim) <= 0) {
			
			cout << crianca[i].nome << " ";
			ninguem = false; 
			
		}
		
	}
	
	if(ninguem) {
		
		cout << "Ninguem";
		
	}
	
	return 0;
}
