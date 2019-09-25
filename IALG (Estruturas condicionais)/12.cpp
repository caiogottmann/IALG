#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

int main() {
	
	float num1, result, rad;
	string calc, angulo;
	
	cin >> calc;
	cin >> angulo;
	cin >> num1;
	
	rad = PI / 180;
	
	//seno em radianos
	//result = sin(num1);
	if(calc == "s") {
		if(angulo == "g") {
			result = sin((rad * num1));
		} else {
			result = sin(num1);
		}
	}
	
	if(calc == "c") {
		if(angulo == "g") {
			result = cos(num1 * rad);
		} else {
			result = cos(num1);
		}
	}
	
	
	cout << result;
	
}

