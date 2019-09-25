#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, result;
	
	cin >> num1;
	cin >> num2;
	while(num2 % num1 != 2) {
		cin >> num2;
	}
	
	result = num2 / num1;
	cout << result;
	
	return 0;
}
