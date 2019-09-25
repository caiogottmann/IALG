#include <iostream>
using namespace std;

int main()
{
	
	int nv1, nv2, num, aux = 0;
	
	cin >> nv1;
	cin >> nv2;
	
	float v1[nv1], v2[nv2];
	
	for(int i = 0;i < nv1;i++) {
		cin >> num;
		
		v1[i] = num;
	}
	
	for(int a = 0;a < nv2;a++) {
		cin >> num;
		
		v2[a] = num;
	}
	
	for(int b = 0;b < nv1;b++) {
		
		for(int c = 0;c < nv2;c++) {
			
			if(v1[b] == v2[c]) {
				cout << v2[c] << " ";
				aux = 1;
			}
			
		}
		
	}
	
	if(aux != 1) {
		cout << -1;
	}
	
	
	return 0;
}
