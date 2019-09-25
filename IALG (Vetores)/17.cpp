#include <iostream>
using namespace std;

int main()
{
	
	int num_v, i;
	bool n_pass = true;
	
	cin >> num_v;
	
	string busca[num_v], pesq;
	
	
	for(i = 0;i < num_v;i++) {
		
		cin >> busca[i];
	}
	
	cin >> pesq;
	
	for(i = 0; i < num_v; i++) {
		
		if(pesq == busca[i]) {
			n_pass = false;
			cout << i << " ";
		}
	}
	
	if(n_pass) {
		cout << -1;
	}
	
	return 0;
}
