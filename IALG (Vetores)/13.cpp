#include <iostream>
using namespace std;

int main()
{
	
	int cod[10], esto[10], i, cod_c, cod_p, qtd, inte = 0, inexis = 0;
	bool inex = true;
	
	for(i = 0;i < 10;i++) {
		cin >> cod[i];
	}
	
	for(i = 0;i < 10;i++) {
		cin >> esto[i];
	}
	
	cin >> cod_c >> cod_p >> qtd;
	
	while(cod_c != 0) {
		
		
		
		for(i = 0;i < 10;i++) {
			
			if(cod[i] == cod_p) {
				
				inex = false;
				
				if(esto[i] >= qtd) {
					
					esto[i] -= qtd;
					
				} else {
					
					inte++;
					
				}
				
			}
			
			
		}
		
		if(inex) {
			inexis++;
		} else {
			inex = true;
		}
		
		cin >> cod_c >> cod_p >> qtd;
		
	}
	
	
	for(i = 0;i < 10;i++) {
		
		cout << cod[i] << " " << esto[i] << endl;
		
	}
	
	cout << inexis << endl;
	cout << inte;
	
	
	
	
	return 0;
}
