#include <iostream>
using namespace std;

int main()
 {
	int mili;
	int h;
	int m;
	float s;
	float conv;
   
	cin >> mili;
	
	h = mili / 3600000;
	conv = mili - (3600000 * h);
	cout << h << " : ";
	
	m = conv / 60000;
	conv = conv - (60000 * m);
	cout << m << " : ";
	
	s = static_cast<float>(conv / 1000);
	conv = conv - (1000 * s);
	cout << s;
	
	
   
	return 0;
}
