//1*2 + 2*3 + 3*4 + .......+ N1*N2;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N1,N2, sum=0;
    int a=1,b=2;
    cin>>N1>>N2;

    while(a<=N1 && b<=N2){
        sum=sum+(a*b);
        a++;
        b++;
    }
    cout<<"Result = "<<sum<<endl;

    return 0;
}

