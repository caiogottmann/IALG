#include <iostream>
using namespace std;

int eliminado (int &v1, int &v2, int &v3, int &v4) {
	
	if((v1 < v2) and (v1 < v3) and (v1 < v4)) {
		v1 = 999;
		return 1;
	} else if((v2 < v1) and (v2 < v3) and (v2 < v4)) {
		v2 = 999;
		return 2;
	} else if((v3 < v1) and (v3 < v2) and (v3 < v4)) {
		v3 = 999;
		return 3;
	} else if((v4 < v1) and (v4 < v3) and (v4 < v2)) {
		v4 = 999;
		return 4;
	}
	return 0;
}

int main() {
	
	string s1, s2, s3, s4;
	int v1, v2, v3, v4, r1, r2;
	
	cin >> s1 >> s2 >> s3 >> s4;
	cin >> v1 >> v2 >> v3 >> v4;
	
	r1 = eliminado(v1, v2, v3, v4);
	r2 = eliminado(v1, v2, v3, v4);
	
	if(r1 == 1) {
		cout << s1 << " ";
	} else if(r1 == 2) {
		cout << s2 << " ";
	} else if(r1 == 3) {
		cout << s3 << " ";
	} else if(r1 == 4) {
		cout << s4 << " ";
	}
	
	if(r2 == 1) {
		cout << s1;
	} else if(r2 == 2) {
		cout << s2;
	} else if(r2 == 3) {
		cout << s3;
	} else if(r2 == 4) {
		cout << s4;
	}
	
	return 0;
}
