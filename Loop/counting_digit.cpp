#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int N,count=0;
    cin>>N;

    while(N!=0){
        N = N / 10;
        count++;
    }
    cout<<"TOTAL DIGIT: "<<count<<endl;

    return 0;
}
