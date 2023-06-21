#include <iostream>

using namespace std;
// Buscar pi = 3.141592

int main()
{
   double i;
   double d = 1;
   int n = 1;
   double pi;
      for (i = 1; i < 1000000; i++)
      {
         pi += n * (4 / d);
         cout << "iteracion " << i << ": " <<  pi << endl;
         if ((pi > 3.141591) && (pi < 3.141593))
         {
            cout << "Se obtiene el valor de pi " << pi << " en la iteracion: " << i << endl;
            break;
         }
         d += 2;
         n *= (-1);
      }
   return 0;
}

