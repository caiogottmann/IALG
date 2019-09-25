#include <iostream>
using namespace std;

int soma_ss(int n1, int n2) {
	
	if(n2 == 1) {
		return n1;
	} else {
		return n1 + soma_ss(n1, n2-1);
	}
}


int main()
{
	int n1, n2;
	
	cin >> n1 >> n2;
	
	cout << soma_ss(n1, n2);
	
	return 0;
}
