#include <iostream>
#include <cmath>

using namespace std;

int main()
 {
	float x1;
	float y1;
	float x2;
	float y2;
	float p1;
   
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	p1 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	cout << p1 << endl;
	
   
	return 0;
}
