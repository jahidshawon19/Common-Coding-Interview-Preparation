//1+5+9+13+...N;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, sum=0; // last number
    cin>>N;
    cout<<"1 + 5 + 9 + 13 +......"<<N<<endl;

    for(int i=1; i<=N; i=i+4){ // difference is 4
        sum=sum+i;
    }
    cout<<"Result = "<<sum<<endl;

    return 0;
}
