#include <iostream>
using namespace std;

int main() 
{
   int limite, aux, n1=0, n2=1;
   cin >> limite;
   cout << n1 << endl;
   while (limite > 1)
   {
      cout << n2 << endl;
      aux = n2;
      n2 += n1;
      n1 = aux;
      limite--;
   }
}
