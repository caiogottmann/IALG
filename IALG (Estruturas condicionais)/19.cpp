#include <iostream>
using namespace std;

int main() {
	
	int h1, h2, m1, m2, hf, mt;
	
	cin >> h1 >> m1;
	cin >> h2 >> m2;
	
	if(m2 >= m1) {
		mt = m2 - m1;
	} else {
		mt = m2 + 60 - m1;
		h1++;
	}
	
	if(h2 >= h1) {
		hf = h2 - h1;
	} else {
		hf = h2 + 24 - h1;
	}
	
	cout << hf << " " << mt;
}
