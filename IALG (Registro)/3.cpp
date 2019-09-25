#include <iostream>
using namespace std;

struct gnomos {
	
	string nome;
	int ent[7];
	int sai[7];
	
};

int main()
{
	
	int n;
	
	cin >> n;
	
	int v[n] = {};
	
	gnomos gnomo[n];
	
	for(int i = 0;i < n;i++) {
		
		cin >> gnomo[i].nome;
		
		for(int a = 0;a < 7;a++) {
			
			cin >> gnomo[i].ent[a];
			cin >> gnomo[i].sai[a];
			
			v[i] += gnomo[i].sai[a] - gnomo[i].ent[a];
		}
		
		//cout << v[i] << endl;
		
	}
	
	
	for(int i = 0;i < n;i++) {
		
		if(v[i] < 70) {
			
			cout << gnomo[i].nome << " " << v[i] << endl;
			
		}
		
	}
	
	
	
	return 0;
}
