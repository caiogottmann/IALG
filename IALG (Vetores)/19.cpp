#include <iostream>
using namespace std;

int main()
{
	
	int v1[5], v2[5], i, soma = 0, pos = 0;
	
	for(i = 0;i < 5;i++) {
		
		cin >> v1[i];
		
	}
	
	for(i = 0;i < 5;i++) {
		
		cin >> v2[i];
		
	}
	
	for(int a = 4;a > -1;a--) {
		
		soma += v1[pos] - v2[a];
		pos++;
		
	}
		
	
	cout << soma;
	
	return 0;
}
