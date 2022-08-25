#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int base, exp,result;
    result=1;

    cout<<"Enter Base: "<<endl;
    cin>>base;
    cout<<"Enter Exponent: "<<endl;
    cin>>exp;

    for(int i=1; i<=exp; i++){
        result = result * base;
    }
    cout<<"Result: "<<result<<endl;
    return 0;
}
