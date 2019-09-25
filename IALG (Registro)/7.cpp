#include <iostream>
using namespace std;

struct clientes {
	
	string nome;
	string cesta;
	
};

struct cestas {
	
	string nome;
	int qtd;
	
};

int main()
{
	
	int n1, n2, soma = 0;
	
	
	cin >> n1;
	
	
	cestas cesta[n1];
	
	for(int i = 0;i < n1;i++) {
		
		cin >> cesta[i].nome;
		cin >> cesta[i].qtd;
		
		
	}
	
	cin >> n2;
	
	
	clientes cliente[n2];
	
	for(int i = 0;i < n2;i++) {
		
		cin >> cliente[i].nome;
		cin >> cliente[i].cesta;
		
	}
	
	for(int i = 0;i < n2;i++) {
		
		for(int a = 0;a < n1;a++) {
			
			if(cesta[a].nome == cliente[i].cesta) {
				soma += cesta[a].qtd;
			}
			
		}
		
	}
	
	cout << soma;
	
	return 0;
}
