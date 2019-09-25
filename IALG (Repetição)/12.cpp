#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, mdc;
	
	cin >> num1 >> num2;
	
	if(num1 > num2) {
		while(num2 > 0) {
			mdc = num1 % num2;
			num1 = num2;
			num2 = mdc;
		}
		cout << num1;
	} else {
		while(num1 > 0) {
			mdc = num2 % num1;
			num2 = num1;
			num1 = mdc;
		}
		cout << num2;
	}
	return 0;
}
