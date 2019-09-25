#include <iostream>
#include <math.h>
using namespace std;

struct ponto {
	
	int x;
	int y;
	
};

int main()
{
	
	int menor, x, y, aux, respx, respy;
	
	ponto pontos[5];
	
	for(int i = 0;i < 5;i++) {
		
		cin >> pontos[i].x;
		cin >> pontos[i].y;
		
	}
	
	x = pontos[1].x - pontos[0].x;
	y = pontos[1].y - pontos[0].y;
	menor = sqrt(pow(x , 2) + pow(y , 2));
	
	respx = pontos[1].x;
	respy = pontos[1].y;
	
	for(int i = 1;i < 5;i++) {
		
		x = pontos[i].x - pontos[0].x;
		y = pontos[i].y - pontos[0].y;
		
		aux = sqrt(pow(x , 2) + pow(y , 2));
		
		if(menor > aux) {
			
			menor = aux;
			
			respx = pontos[i].x;
			respy = pontos[i].y;
			
		}
		
	}
	
	cout << respx << " " << respy;
	
	//d = raiz((xb - xa)2 + (yb - ya)2)
	
	return 0;
}
