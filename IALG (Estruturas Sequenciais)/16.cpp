#include <iostream>
using namespace std;

int main()
 {
	float n1;
	float n2;
	float n3;
	int p1;
	int p2;
	int p3;
	float media;
   
	cin >> n1 >> n2 >> n3;
	cin >> p1 >> p2 >> p3;
	
	
	media = (((n1*p1)+(n2*p2)+(n3*p3)) / (p1+p2+p3));
	
	cout << media;
	

	
   
	return 0;
}
