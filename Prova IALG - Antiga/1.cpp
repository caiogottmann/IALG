#include <iostream>
using namespace std;

int main() {
	
	int qtd;
	string combustivel;
	float result, gasolina = 4.80, alcool = 2.90;
	
	cin >> qtd;
	cin >> combustivel;
	
	
	if(qtd > 20) {
		if(combustivel == "A") {
			result = (qtd * alcool);
			result -= (qtd * alcool) * 0.05;
		} else {
			result = (qtd * gasolina);
			result -= (qtd * gasolina) * 0.06;
		}
	} else {
		if(combustivel == "A") {
			result = (qtd * alcool);
			result -= ((qtd * alcool) * 0.03);
		} else {
			result = (qtd * gasolina);
			result -= (qtd * gasolina) * 0.04;
		}
	}
	
	cout << result << endl;
	return 0;
}
