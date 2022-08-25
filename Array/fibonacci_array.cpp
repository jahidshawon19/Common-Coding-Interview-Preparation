#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int data[N];
    data[0]=0;
    data[1]=1;
    for(int i=2; i<=N; i++){
        data[i] = data[i-1] + data[i-2];
    }
    for(int i=0; i<N; i++){
        cout<<data[i]<<" ";
    }
    return 0;
}
