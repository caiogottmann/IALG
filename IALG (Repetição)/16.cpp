#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.14159265
using namespace std;

int main() {
	
	float raio, cadeira, angulo, angulo_p, cont = 1, sen, coss, rad;
	
	cin >> raio >> cadeira;
	
	angulo = 360 / cadeira;
	rad = PI / 180;
	
	cout << fixed << setprecision(2);
	
	cout << raio << " " << 0 << endl;
	while(cont < cadeira) {
		angulo_p = angulo * cont;
		sen = sin(angulo_p * rad) * raio;
		coss = cos(angulo_p * rad) * raio;
		
		cout << coss << " " << sen << endl;
		cont++;
	}
	return 0;
	
	
	
	
	
	
	
	
}
