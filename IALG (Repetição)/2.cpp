#include <iostream>
using namespace std;

int main() {
	
	int numt, aux;
	
	cin >> numt;
	aux = numt;
	
	while(aux > 0) {
		aux--;
		numt += aux;
	}
	cout << numt;
	return 0;
}
