#include<bits/stdc++.h>
using namespace std;

int fibo(int num){

    if(num==0){
        return 0;
    }else if(num==1){
        return 1;
    }else{
        return fibo(num-1)+fibo(num-2);
    }
}


int main(){

    int N; // how many digits
    cin>>N;

    for(int i=0; i<N; i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}
