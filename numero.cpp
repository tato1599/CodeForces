#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <vector>
using namespace std;

int main(){
    int sum,meta;
    int n,e;
    signed int aux;
    vector<int> arr;
    int res = 0;
    cin>>n>>meta;
    while(n--){
        cin>>e;
        arr.push_back(e);
    }
    n = arr.size();
    for(signed int state = 0; state < (pow(2,n)); state++){
        aux = 1;
        //001
        //010
        //100
        sum = 0;
        for(signed int currBit = 0; currBit<n; currBit++){
            if(state & aux) {
                sum+=arr[currBit];
            }
            aux = (aux*2);
        }
        //cout<<sum<<endl;
        if(sum == meta){
            res++;
        }
    }
    cout<<res<<endl;
return 0;

}