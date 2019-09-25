#include <iostream>
using namespace std;

int main()
{
	
	int n, i, max = 0;
	
	cin >> n;
	
	string palavra[n];
	
	for(i = 0;i < n;i++) {
		
		cin >> palavra[i];
		if((int)palavra[i].size() > max) {
			max = palavra[i].size();
		}
		
	}
	
	for(i = 0;i < n;i++) {
		for(int a = 0;a < (max - (int)palavra[i].size());a++) {
			
			cout << "*";
			
		}
		cout << palavra[i] << endl;
	}
	
	
	return 0;
}
