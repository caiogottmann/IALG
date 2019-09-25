#include <iostream>
#include <fstream>
using namespace std;

double phi(int num, bool first) {
	double aux;
	
	ofstream arquivo1;
	arquivo1.open("phi.txt", ios::app);
	
	if(num == 1) {
		arquivo1 << 1 << endl;
		return 1;
	} else {
		aux = (1 + (1 / phi(num - 1, false)));
		arquivo1 << aux << endl;
		return aux;
	}
	
}

int main()
{
	
	int num;
	double r_phi;
	
	cin >> num;
	
	r_phi = phi(num, true);
	
	
	cout << r_phi;
	
	return 0;
}
