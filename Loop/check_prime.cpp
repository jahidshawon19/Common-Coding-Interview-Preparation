#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,count=0;

    cin>>N;
    for(int i=2; i<N; i++){
        if(N%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"PRIME"<<endl;
    }else{
        cout<<"NOT PRIME"<<endl;
    }

    return 0;
}
