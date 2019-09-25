#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
	float n;
	float result;
   
	cin >> n;
	
	result = 2*log((n + sqrt(pow(n, 2) + 4))/2);
	
	cout << result;
	
	return 0;
}
