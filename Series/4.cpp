
// 2^2 + 4^2 + 6^2 +.......+ N

#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, sum=0;
    cin>>N;

    for(int i=2; i<=N; i=i+2){
        sum=sum+i*i;
    }


    cout<<"Result= "<<sum<<endl;
}
