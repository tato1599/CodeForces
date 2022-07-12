#include <iostream>
#include <map>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    bool q = true;
    map<string, int> mapa;
    string aux = "";
    int cont = 0;
    string lmao;
    char z = 'z';
    string pa;
    cin >> pa;
    if (pa.length() == 1)
    {
        cont=0;
        for (char i = 'a'; i <= z; i++)
        {
            cont++;
            lmao = "";
            lmao += i;
            mapa[lmao] = cont;
        }
    }
    if (pa.length() == 2)
    {
        cont=26;
        for (char j = 'a'; j <= z; j++)
        {
            for (char k = j + 1; k <= z; k++)
            {
                lmao = "";
                lmao += j;
                lmao += k;
                cont++;
                mapa[lmao] = cont;
            }
        }
    }
    if (pa.length() == 3)
    {
        cont=351;
        for (char j = 'a'; j <= z; j++)
        {
            for (char k = j + 1; k <= z; k++)
            {
                for (char l = k + 1; l <= z; l++)
                {
                    lmao = "";
                    lmao += j;
                    lmao += k;
                    lmao += l;
                    cont++;
                    mapa[lmao] = cont;
                }
            }
        }
    }
    if (pa.length() == 4)
    {
        cont=2951;
        for (char j = 'a'; j <= z; j++)
        {
            for (char k = j + 1; k <= z; k++)
            {
                for (char l = k + 1; l <= z; l++)
                {
                    for (char m = l + 1; m <= z; m++)
                    {
                        lmao = "";
                        lmao += j;
                        lmao += k;
                        lmao += l;
                        lmao += m;
                        cont++;
                        mapa[lmao] = cont;
                    }
                }
            }
        }
    }

    if (pa.length() == 5)
    {
        cont=17901;
        for (char j = 'a'; j <= z; j++)
        {
            for (char k = j + 1; k <= z; k++)
            {
                for (char l = k + 1; l <= z; l++)
                {
                    for (char m = l + 1; m <= z; m++)
                    {
                        for (char n = m + 1; n <= z; n++)
                        {
                            lmao = "";
                            lmao += j;
                            lmao += k;
                            lmao += l;
                            lmao += m;
                            lmao += n;
                            cont++;
                            mapa[lmao] = cont;
                        }
                    }
                }
            }
        }
    }

    for (auto x : mapa)
    {
        if (x.first == pa)
        {
            
            cout << x.second;
            q = false; 
            break;
        }
    }
    if(q){
        cout<< "0";
    }
    mapa.clear();
    return 0;
}