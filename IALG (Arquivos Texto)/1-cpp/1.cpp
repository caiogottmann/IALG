#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	string nome, palavra;
	
	cin >> nome;
	
	
	ifstream arquivo;
	
	arquivo.open(nome.c_str());
	//ifstream arquivo(nome.c_str());
	arquivo >> palavra;
	
	arquivo.close();
	
	cout << palavra;
	return 0;
}
