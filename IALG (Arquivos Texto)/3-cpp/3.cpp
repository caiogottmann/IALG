#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	string arq1, arq2, palavra;
	
	cin >> arq1;
	cin >> arq2;
	
	ifstream arquivo1;
	ofstream arquivo2;
	
	arquivo1.open(arq1.c_str());
	
	arquivo2.open(arq2.c_str());
	//ifstream arquivo(nome.c_str());
	
	if(arquivo1 and arquivo2) {
		while(arquivo1 >> palavra) {
			
			arquivo2 << palavra;
			cout << palavra;
			
		}
	}
	
	arquivo2.close();
	arquivo1.close();
	
	return 0;
}
