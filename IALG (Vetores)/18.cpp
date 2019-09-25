#include <iostream>
using namespace std;

int main()
{
	
	int n_v1, n_v2, i, pos = 0;
	bool tem = true;
	
	cin >> n_v1;
	
	int v1[n_v1], v3[n_v1];
	
	for(i = 0;i < n_v1;i++) {
		
		cin >> v1[i];
	}
	
	cin >> n_v2;
	
	int v2[n_v2];
	
	for(i = 0;i < n_v2;i++) {
		
		cin >> v2[i];
	}
	
	for(i = 0; i < n_v1; i++) {
		
		for(int a = 0;a < n_v2;a++) {
			
			if(v1[i] == v2[a]) {
				tem = false;
			}
			
		}
		if(tem) {
			v3[pos] = v1[i];
			pos++;
		}
		tem = true;
		
	}
	
	for(i = 0;i < pos;i++) {
		cout << v3[i] << " ";
	}
	
	return 0;
}
