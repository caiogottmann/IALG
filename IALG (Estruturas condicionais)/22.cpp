#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	float hextra, hfalta, h;
	int premio;
	
	cin >> hextra;
	cin >> hfalta;
	
	h = hextra - (0.666666667 * hfalta);
	
	h *= 60;
	
	if(h <= 600) {
		premio = 100;
	} else if((h > 600) and (h <= 1200)) {
		premio = 200;
	} else if((h > 1200) and (h <= 1800)) {
		premio = 300;
	} else if((h > 1800) and (h <= 2400)) {
		premio = 400;
	} else {
		premio = 500;
	}
	
	cout << premio;
	return 0;
}
