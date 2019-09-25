#include <iostream>
using namespace std;

int Ricci(int n, int f0, int f1) {
	int a;
	
	if(n == 0) {
		return f0;
	} else if(n == 1) {
		return f1;
	} else {
		a = Ricci(n-1, f0, f1) + Ricci(n-2, f0, f1);
		cout << a <<" ";
		return a;
	}
}


int main()
{
	int f0, f1, n;
	
	cin >> f0 >> f1;
	cin >> n;
	
	cout << f0 << " " << f1 << " "; 
	
	Ricci(n, f0, f1);
	
	return 0;
}
