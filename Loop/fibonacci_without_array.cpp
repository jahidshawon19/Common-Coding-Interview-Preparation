#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,fibo;
    cin>>N;
    int first = 0;
    int second = 1;
    int count = 0;

    while(count<N){
        if(count <= 1){
            fibo=count;
        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }

        cout<<fibo<<" ";
        count++;
    }
    return 0;
}
