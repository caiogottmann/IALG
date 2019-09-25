#include <iostream>
using namespace std;

int numeros(int n) {
	int a;
	if(n == 0) {
		cout << 0 << " ";
		return 0;
	} else {
		a = 1 + numeros(n-1);
		cout << a <<" ";
		return a;
	}
}


int main()
{
	int n;
	
	cin >> n;
	
	numeros(n);
	
	return 0;
}
