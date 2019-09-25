#include <iostream>
using namespace std;

int main()
{
	
	int v[20], ordem, i;
	
	cin >> ordem;
	
	if(ordem == 1) {
		
		for(i = 0;i < 20;i++) {
			
			cin >> v[i];
			
		}
		
		for(i = 0;i < 20;i++) {
			
			cout << v[i] << " ";;
			
		}
		
		
	} else if(ordem == 2) {
		
		for(i = 0;i < 20;i++) {
			
			cin >> v[i];
			
		}
		
		for(i = 19;i > -1;i--) {
			
			cout << v[i] << " ";
			
		}
		
	}
	
	return 0;
}
