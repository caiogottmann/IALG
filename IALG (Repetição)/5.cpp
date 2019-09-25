#include <iostream>
using namespace std;

int main() {
	
	int a, b, result = 0, cont = 1;
	
	cin >> a;
	cin >> b;
	
	while(cont <= b) {
		result += a;
		cout << result << endl;
		cont++;
	}
	return 0;
}
