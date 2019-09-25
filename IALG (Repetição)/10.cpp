#include <iostream>
using namespace std;

int main() {
	
	float r, n, aux, result = 1, termo, primeiro = 1;
	
	cin >> r;
	cin >> n;
	aux = n;
	while(aux > 0) {
		termo = aux;
		if(primeiro == 1) {
			cout << result << endl;
			primeiro = 0;
		} else {
			while(n > termo) {
				result *= r;
				termo++;
			}
			cout << result << endl;
			result = 1;
		}
		aux--;
	}
	
	return 0;
}
