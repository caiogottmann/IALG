#include <iostream>
using namespace std;

struct clientes {
	
	int n_conta;
	string nome;
	
};

struct transacoes {
	
	int n_conta;
	string desc;
	float valor;
	
};

int main()
{
	int contc = 0, contt = 0, contcon = 0, num;
	
	clientes cliente[20] = {};
	
	cin >> num;
	
	while(num >= 0) {
		
		cliente[contc].n_conta = num;
		cin >> cliente[contc].nome;
		
		contc++;
		
		cin >> num;
	}
	
	transacoes transacao[100];
	
	cin >> num;
	
	while(num >= 0) {
		
		transacao[contt].n_conta = num;
		cin >> transacao[contt].desc;
		cin >> transacao[contt].valor;
		
		contt++;
		
		cin >> num;
	}
	
	
	int v[contc];
	
	cin >> num;
	
	while(num >= 0) {
		
		v[contcon] = num;
		
		contcon++;
		
		cin >> num;
	}
	
	for(int i = 0;i < contcon;i++) {
		
		for(int a = 0;a < contc;a++) {
			
			if(v[i] == cliente[a].n_conta) {
				
				cout << cliente[a].nome << endl;
				
			}
			
		}
		
		for(int b = 0;b < contt;b++) {
				
				if(v[i] == transacao[b].n_conta) {
					
					cout << transacao[b].desc << " " << transacao[b].valor << endl;
					
				}
				
			}
		
	}
	
	
	return 0;
}
