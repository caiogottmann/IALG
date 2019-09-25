#include <iostream>
using namespace std;

int main()
{
	
	int vetor[7], v2[7] = {0}, v3[7] = {0}, v23[7] = {0}, num, c2 = 0, c3 = 0, c23 = 0;
	
	
	for(int i = 0;i < 7;i++) {
		
		cin >> num;
		
		vetor[i] = num;
		
	}
	
	for(int i = 0;i < 7;i++) {
		
		if((vetor[i] % 2 == 0) and (vetor[i] % 3 == 0)) {
			v2[c2] = vetor[i];
			c2++;
			
			v3[c3] = vetor[i];
			c3++;
			
			v23[c23] = vetor[i];
			c23++;
		} else if(vetor[i] % 2 == 0) {
			v2[c2] = vetor[i];
			c2++;
		} else if(vetor[i] % 3 == 0) {
			v3[c3] = vetor[i];
			c3++;
		}
		
	}
	
	if(v2[0] == 0) {
		cout << 0;
	} else {
		for(int i = 0;i < c2;i++) {
			
			cout << v2[i] << " ";
			
		}
	}
	
	cout << endl;
	
	if(v3[0] == 0) {
		cout << 0;
	} else {
		for(int i = 0;i < c3;i++) {
			
			cout << v3[i] << " ";
			
		}
	}
	
	cout << endl;
	
	if(v23[0] == 0) {
		cout << 0;
	} else {
		for(int i = 0;i < c23;i++) {
			
			cout << v23[i] << " ";
			
		}
	}
	return 0;
}
