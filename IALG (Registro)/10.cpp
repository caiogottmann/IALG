#include <iostream>
using namespace std;

struct IMC {
	string nome;
	float altura;
	float peso;
	char sexo;
};

int main()
{
	int qtd, masc = 0, fem = 0, i;
	float imc_m = 0, imc_f = 0, imc = 0;
	char calc;
	
	cin >> qtd;
	
	IMC pessoa[qtd];
	
	
	for(i = 0;i < qtd;i++) {
		cin >> pessoa[i].nome;
		cin >> pessoa[i].altura;
		cin >> pessoa[i].peso;
		cin >> pessoa[i].sexo;
		
		if(pessoa[i].sexo == 'M') {
			masc++;
			imc_m += pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);
		} else {
			fem++;
			imc_f += pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);
		}
	}
	
	cin >> calc;
	
	for(i = 0;i < qtd;i++) {
		
		imc = pessoa[i].peso/(pessoa[i].altura * pessoa[i].altura);
		
		
		if(calc == 'M') {
			
			if(pessoa[i].sexo == 'M') {
				
				if(imc > (imc_m / masc)) {
					cout << pessoa[i].nome << " ";
				}
				
			}
			
		} else {
			
			if(pessoa[i].sexo == 'F') {
				
				if(imc > (imc_f / fem)) {
					cout << pessoa[i].nome << " ";
				}
				
			}
			
		}
		
	}
	
	
	return 0;
}
