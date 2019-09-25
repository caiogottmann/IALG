#include <iostream>
using namespace std;

int main()
{
	float temp[12], num;
	int contador = 0, maior = -1, menor = 100, pos_ma, pos_me;
	string mes[12] = {"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
	
	while (contador < 12) {
		cin >> num;
		
		temp[contador] = num;
		
		contador++;
	}
	
	for(int i = 0; i < 12; i++) {
		
		if(temp[i] > maior) {
			maior = temp[i];
			pos_ma = i;
		} else if(temp[i] < menor) {
			menor = temp[i];
			pos_me = i;
		}
	}
	
	cout << mes[pos_ma] << endl;
	cout << mes[pos_me] << endl;
	
	
	return 0;
}
