#include <iostream>
using namespace std;

void divisor(int num) {
	int aux = 1, maior = 0, menor = 999;
	
	while(num >= aux) {
		
		if(num % aux == 0) {
			
			if((aux > maior) and (aux != num)) {
				maior = aux;
			}
			if((menor > aux) and (aux != 1)) {
				menor = aux;
			}
			
			cout << aux << endl;
		}
		aux++;
	}
	
	cout << menor << " " << maior;
	
}

int main()
{
	int num;
	
	cin >> num;
	
	divisor(num);
	return 0;
}
