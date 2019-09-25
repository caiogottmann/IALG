#include <iostream>
using namespace std;

int main()
{
	
	int num, soma = 0;
	
	cin >> num;
	
	string palavra, v[num];
	
	for(int i = 0;i < num ;i++) {
		cin >> v[i];
	}
	
	const int UMPRIMO = 13;
	const int M = 10;
	
	
	for(int i = 0;i < num ;i++) {
		long hash = 0;
		
		for (unsigned j = 0; j < v[i].size(); j++) {
			hash = (UMPRIMO * hash + v[i][j]) % M;
		}
		soma += hash;
		cout << hash << " ";
		
	}
	cout << soma;
	
	
	return 0;
}
