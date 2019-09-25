#include <iostream>
using namespace std;

int main()
{
	
	int m[10][5], v[21] = {0}, a, i, aux;
	
	for(i = 0;i < 10;i++) {
		
		for(a = 0;a < 5;a++) {
			
			cin >> m[i][a];
			
		}
	}
	
	for(i = 0;i < 10;i++) {
		
		for(a = 0;a <= 5;a++) {
			
			aux = m[i][a] - 1;
			
			v[aux]++;
		}
	}
	
	cout << m[0][0];
	//aux = m[0][0] - 1;
	//cout << m[i][a] << " " << v[aux] << endl;
	
	//for(i = 0;i < 10;i++) {
	
		//for(a = 0;a < 5;a++) {
			
			//aux = m[i][a] - 1;
			
			//cout << m[i][a] << " " << v[aux] << endl;
		//}
		
	//}
	return 0;
}
