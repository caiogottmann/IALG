#include <iostream>
#include <math.h>
using namespace std;

float juros(float C, float i, int t) {
	float juros = 0;
	
	juros = pow((1 + i),t);
	
	return juros;
}

int main() {
	float C, i, result;
	int t;
	
	cin >> C;
	cin >> i;
	cin >> t;
	
	result = C * pow(1+i,t);
	
	cout << result;
	
	//cout << juros(C, i, t);
	return 0;
}
