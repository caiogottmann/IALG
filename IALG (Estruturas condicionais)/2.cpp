#include <iostream>
using namespace std;

int main() {
	
	int ano;
	
	cin >> ano;
	
	if(ano % 400==0) {
		cout << 1;
	} else {
		if((ano % 4==0) and (ano % 100 !=0)) {
			cout << 1;
		} else {
			cout << 0;
		}
		
	}
	
}
