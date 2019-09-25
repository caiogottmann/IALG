#include <iostream>
using namespace std;

int main() {
	
	float num1, num2, result;
	string operador;
	
	cin >> num1 >> operador >> num2;
	
	if(operador == "+") {
		result = num1 + num2;
		cout << result << endl;
	} else if(operador == "-") {
		result = num1 - num2;
		cout << result << endl;
	} else if(operador == "*") {
		result = num1 * num2;
		cout << result << endl;
	} else if((operador == "/") and (num2 != 0)) {
		result = num1 / num2;
		cout << result << endl;
	} else {
		cout << "erro" << endl;
	}
	return 0;
}


