#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
	float altd;
	float alta;
	int result;
   
	cin >> altd;
	cin >> alta;
	
	
	alta = alta * 100;
	
	result = ceil(alta/altd);
	
	cout << result;
	

	
   
	return 0;
}
