#include <iostream>
using namespace std;

int main() {
	
	float num, termo = 7, maior = 0, media = 0, menor = 0;
	
	
	while(termo > 0) {
		cin >> num;
		if(num > maior) {
			maior = num;
		} else {
			
			if(num > menor) {
				menor = num;
			}
			media += num;
		}
		
		termo--;
	}
	cout << maior << endl;
	cout << menor << endl;
	cout << (media - menor) / 5 << endl;
	
	return 0;
}
