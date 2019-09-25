#include <iostream>
using namespace std;

struct carro {
	
	float posicao;
	float velocidade;
	
};

int main()
{
	
	float s0, s, v0, v, seg, aux;
	
	cin >> s0 >> s;  
	cin >> v0 >> v;  
	cin >> seg;  
	
	carro car[2];
	
	car[0].posicao = s0;
	car[0].velocidade = v0;
	
	
	car[1].posicao = s;
	car[1].velocidade = v;
	
	
	for(int i = 0;i < 2;i++) {
		
		aux = car[i].posicao + (car[i].velocidade * seg);
		
		cout << aux << " ";
	}
	
	
	return 0;
}

// s = s0 + v * t
