#include <iostream>
using namespace std;

int main()
{
	
	int v[20], maior, i;
	float div;
	
	for(i = 0;i < 20;i++) {
		
		cin >> v[i];
		
	}
	maior = v[0];
	
	for(i = 0;i < 20;i++) {
		
		if(v[i] > maior) {
			maior = v[i];
		}
		
	}
	
	for(i = 0;i < 20;i++) {
		
		div = float(v[i]) / maior;
		
		cout << div << " ";
		
	}
	
	
	return 0;
}
