#include <iostream>
using namespace std;

int main() {
	
	int matricula, aux = 1, alunos = 0;
	float nota, media = 0, mediaTurma = 0, mediaSuperior = 0, maiorNota = 0, menorNota = 10;
	
	cin >> matricula;
	
	while(matricula != 9999) {
		media = 0;
		alunos++;
		while(aux <= 10) {
			cin >> nota;
			media += nota;
			aux++;
		}
		aux = 1;
		media /= 10;
		if(media > 6.0) {
			mediaSuperior++;
		}
		
		if(media > maiorNota) {
			maiorNota = media;
		}
		if(media < menorNota) {
			menorNota = media;
		}
		mediaTurma += media;
		
		cin >> matricula;
	}
	
	cout << mediaTurma / alunos << endl;
	cout << mediaSuperior << endl;
	cout << maiorNota << endl;
	cout << menorNota << endl;
	return 0;
}
