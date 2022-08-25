#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, fact=1;
    cin>>N;
    for(int i=1; i<=N; i++){
        fact=fact*i;
    }
    cout<<"Factorial: "<<fact<<endl;

    return 0;
}
