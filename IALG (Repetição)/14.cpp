#include <iostream>
using namespace std;

int main() {
	
	int num, termo1 = 0, termo2 = 0, aux;
	string casa = ".";
	
	cin >> num;
	aux = num;
	while(num > termo1) {
		
		while(aux > termo2) {
			if(casa == ".") {
				cout << casa;
				casa = "#";
			} else {
				cout << casa;
				casa = ".";
			}
			termo2++;
		}
		cout << endl;
		if(num % 2 == 0) {
			if(casa == ".") {
				casa = "#";
			} else {
				casa = ".";
			}
		}
		termo2 = 0;
		termo1++;
	}
	
	return 0;
}
