#include <iostream>
using namespace std;

int main() {
	
	float num1, num2, num3, num4;
	
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	
	
	if((num1 > num2) and (num1 > num3) and (num1 > num4)) {
		cout << num1 << endl;
		num1 = 0;
	} else if((num2 > num1) and (num2 > num3) and (num2 > num4)) {
		cout << num2 << endl;
		num2 = 0;
	} else if((num3 > num1) and (num3 > num2) and (num3 > num4)) {
		cout << num3 << endl;
		num3 = 0;
	} else if((num4 > num1) and (num4 > num2) and (num4 > num3)) {
		cout << num4 << endl;
		num4 = 0;
	}
	
	if((num1 > num2) and (num1 > num3) and (num1 > num4)) {
		cout << num1 << endl;
		num1 = 0;
	} else if((num2 > num1) and (num2 > num3) and (num2 > num4)) {
		cout << num2 << endl;
		num2 = 0;
	} else if((num3 > num1) and (num3 > num2) and (num3 > num4)) {
		cout << num3 << endl;
		num3 = 0;
	} else if((num4 > num1) and (num4 > num2) and (num4 > num3)) {
		cout << num4 << endl;
		num4 = 0;
	}
}
