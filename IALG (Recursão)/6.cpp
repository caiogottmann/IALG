#include <iostream>
using namespace std;

double Hanoi(int n) {
	
	if(n == 1) {
		return 1;
	} else {
		return (2 * Hanoi(n - 1) + 1);
	}
}


int main()
{
	int n;
	
	cin >> n;
	
	cout << Hanoi(n);
	
	return 0;
}
