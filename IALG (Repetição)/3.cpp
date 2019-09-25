#include <iostream>
using namespace std;

int main() {
	
	int num, aux, result = 1, cont = 1, primeiro = 1;
	
	while(cont <= 5) {
		cin >> num;
		if(primeiro != 1) {
			if(num > aux) {
				result += 1;
			} else if(aux > num) {
				result -= 1;
			}
		}
		aux = num; 
		cont++;
		primeiro--;
	}
	if(result == 5) {
		cout << 1;
	} else {
		cout << 0;
	}
	
	return 0;
}
