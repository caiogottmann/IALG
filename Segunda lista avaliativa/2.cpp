#include <iostream>
using namespace std;

int main()
{
	
	int num1, num2, i, a;
	bool existe = true;
	
	cin >> num1;
	
	string v1[num1];
	
	for(i = 0;i < num1;i++) {
		
		cin >> v1[i];
		
	}
	
	cin >> num2;
	
	string v2[num2];
	
	for(i = 0;i < num2;i++) {
		
		cin >> v2[i];
		
	}
	
	for(i = 0;i < num1;i++) {
		
		for(a = 0;a < num2;a++) {
			
			if(v1[i] == v2[a]) {
				cout << v1[i] << endl;
				existe = false;
			}
			
		}
		
	}
	
	if(existe) {
		cout << "NADA";
	}
	
	return 0;
}
