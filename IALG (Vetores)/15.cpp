#include <iostream>
using namespace std;

int main()
{
	int num_v, i, meio, p_maior = 0, p_menor = 0;
	float maior, menor;
	
	cin >> num_v;
	
	float v[num_v];
	
	for(i = 0;i < num_v;i++) {
		
		cin >> v[i];
		
	}
	maior = v[0];
	menor = v[0];
	
	if(num_v % 2 == 0) {
		meio = -1;
	} else {
		meio = (num_v - 1) / 2;
	}
	
	for(i = 0;i < num_v;i++) {
		
		if(v[i] > maior) {
			maior = v[i];
			p_maior = i;
		}
		
		if(menor > v[i]) {
			 menor = v[i];
			 p_menor = i;
		}
		
	}
	
	cout << maior << endl;
	cout << menor << endl;
	if(meio == -1) {
		 cout << meio << endl;
	} else {
		cout << v[meio] << endl;
	}
	cout << p_maior << endl;
	cout << p_menor << endl;
	cout << meio << endl;
	
	
	
	
	return 0;
}
