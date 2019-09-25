#include <iostream>
using namespace std;

void primo(int num1, int num2) {
	int aux = 1, cont = 0, result = 0;
	
	while(num1 <= num2) {
		
		
		while(aux <= num1) {
			
			if(num1 % aux == 0) {
				cont++;
			}
			
			aux++;
		}
		
		if(cont == 2) {
			result++;
		}
		
		num1++;
		aux = 1;
		cont = 0;
	}
	
	cout << result;
	
}

int main() {
	
	int num1, num2;
	
	cin >> num1 >> num2;
	
	primo(num1, num2);
	
	return 0;
}
