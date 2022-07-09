#include <iostream>
#include <string>
using namespace std;

int main(){
    int cp;
    string p;
    cin>>cp;
    while(cp--){
        p.clear();
        cin>>p;
        if(p.length() > 10){
         cout << p.front()  << p.length()-2 << p.back() << endl;
        }else{
            cout<< p<< endl; 
        }
        }
        return 0;
    }

   
