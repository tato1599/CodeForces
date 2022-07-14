#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
int p, n, cp,costo,cont;
vector<int> casas;
cin>>cp;
for(int i = 0 ; i<cp;i++){
    casas.clear();
    p = 0;
    cont=0;
    cin>>n>>p;
    for (int j = 0; j < n; j++)
    {
        cin>>costo;
        casas.push_back(costo);
    }

    sort(casas.begin(),casas.end());
   
    for (int j = 0; j < n; j++)
    {
        
        if(p<casas[j]){
            break;
        }else{
            p-=casas[j];
            cont++;
        }
       
    }
    
    cout<< "Caso #" << i+1 <<": " << cont << endl; 
    
}
return 0;
}