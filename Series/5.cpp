// 1 + 1/2 + 1/3 + 1/4 + ...... + 1/N;

#include<bits/stdc++.h>
using namespace std;

int main(){

    float n,i, sum=0;
    cin>>n;


    for(i=1; i<=n; i++){
        sum=sum+(1/i);
    }



    cout<<"Result= "<<sum<<endl;
}

