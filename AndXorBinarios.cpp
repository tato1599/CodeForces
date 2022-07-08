#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;

int main(){
signed long long int numero;
int numero2 , comp,aux;
cin>>comp;
while(comp--){
numero = 0; numero2 = 1;
cin>>numero;
while(!((numero&numero2)>0 && (numero^numero2)>0)){
numero2++;
}
cout<<numero2<<endl;
}
}