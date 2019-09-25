#include <iostream>
using namespace std;

struct doador {
	
	string nome;
	string tipo;
	
};

int main()
{
	
	int n, ca=0,cb=0,cab=0,co=0, aux;
	string tipo_recp;
	
	cin >> n;
	
	string a[n], b[n], ab[n], o[n];
	doador doar[n];
	
	for(int i = 0;i < n;i++) {
		
		cin >> doar[i].nome;
		cin >> doar[i].tipo;
		
		if(doar[i].tipo == "A") {
			
			a[ca] = doar[i].nome;
			ca++; 
			
		}
		
		if(doar[i].tipo == "B") {
			
			b[cb] = doar[i].nome;
			cb++; 
			
		}
		
		if(doar[i].tipo == "AB") {
			
			ab[cab] = doar[i].nome;
			cab++; 
			
		}
		
		if(doar[i].tipo == "O") {
			
			o[co] = doar[i].nome;
			co++; 
			
		}
		
		
	}
	
	cin >> tipo_recp;
	
	if(tipo_recp == "A") {
		
		for(aux = 0;aux < ca;aux++) {
			
			cout << a[aux] << endl;
			
		}
		
		for(aux = 0;aux < co;aux++) {
			
			cout << o[aux] << endl;
			
		}
		
	}
	
	if(tipo_recp == "B") {
		
		for(aux = 0;aux < cb;aux++) {
			
			cout << b[aux] << endl;
			
		}
		
		for(aux = 0;aux < co;aux++) {
			
			cout << o[aux] << endl;
			
		}
		
	}
	
	if(tipo_recp == "AB") {
		
		for(aux = 0;aux < cab;aux++) {
			
			cout << ab[aux] << endl;
			
		}
		
		for(aux = 0;aux < ca;aux++) {
			
			cout << a[aux] << endl;
			
		}
		
		for(aux = 0;aux < cb;aux++) {
			
			cout << b[aux] << endl;
			
		}
		
		for(aux = 0;aux < co;aux++) {
			
			cout << o[aux] << endl;
			
		}
		
	}
	
	if(tipo_recp == "O") {
		
		for(aux = 0;aux < co;aux++) {
			
			cout << o[aux] << endl;
			
		}
		
	}
	
	return 0;
}
