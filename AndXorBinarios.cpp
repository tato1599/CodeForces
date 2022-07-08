#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

int main()
{
    int numero;
    int numero2, cp, aux;
    cin >> cp;
    while (cp--)
    {
        cin >> numero;
        if (numero == 1)
        {
            cout << "3" << endl;
        }
        else if ((numero % 2) == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            bitset<32> n(numero);
            if (n._Find_next(n._Find_first()) == 32)
            {
                cout << numero + 1<<endl;
            }
            else
            {
                aux = n._Find_first();
                n.reset();
                n.set(aux);
                cout << n.to_ulong() << endl;
            }
        }
    }
}
