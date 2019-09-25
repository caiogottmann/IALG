#include <iostream>
using namespace std;

struct viloes {
	string nome;
	string alvo;
};

struct planos {
	string nome_plano;
	string nome;
	int preju;
};

int main()
{
	
	int num1, num2, i;
	string busca;
	bool existe = true;
	
	cin >> num1;
	
	viloes vilao[num1];
	
	for(i = 0;i < num1;i++) {
		cin >> vilao[i].nome;
		cin >> vilao[i].alvo;
	}
	
	cin >> num2;
	
	planos plano[num2];
	
	for(i = 0;i < num2;i++) {
		cin >> plano[i].nome_plano;
		cin >> plano[i].nome;
		cin >> plano[i].preju;
	}
	
	cin >> busca;
	
	
	for(i = 0;i < num1;i++) {
		
		for(int a = 0;a < num2;a++) {
			if(plano[i].nome == vilao[a].nome) {
				if(vilao[a].alvo == busca) {
					cout << plano[i].nome_plano << " " << plano[i].preju << endl;
					existe = false;
				}
			}
		}
		
	}
	
	if(existe) {
		cout << -1;
	}
	
	return 0;
}
