#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    
    vector<unsigned long long int> v;
    
    signed long long int num, numero, sum,n,k;
    int cp,l,i;
    cin >> cp;
    while (cp--)
    {
        bool t = false;
        num = 0; l=0; i = 0; sum = 0;
        cin >> num;
        if(num<100){
            i=0; l = 5;
        }
        if(num> 100 && num < 1000){
            i=0;
            l=10;
        }
        if(num>1000 && num<100000){
            i=0;
            l=100;
        }
        if(num>100000){
            i=0;
            l=10000;
        }
        for (i; i <= l; i++)
        {
            numero = pow(i, 3);
            v.push_back(numero);
            
        }
        
        k = 1;
        n = v.size()-1;
    
        while(k<=n){
           // cout<< v[n] << " + " <<  v[k] <<endl;
            if(v[n]+v[k] == num){
                cout<< "YES" <<endl;
                t= true;
                break;
            }
            else if(v[k]+v[n] < num){
                k++;
            }else{
                n--;
            }
          
        }
        if(t==false){
            cout<<"NO\n";
        }

        v.clear();
    }
    return 0;
}