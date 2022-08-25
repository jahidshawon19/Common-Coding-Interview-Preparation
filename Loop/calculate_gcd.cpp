#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2,n1,n2;
    cin>>num1>>num2;
    n1=num1;
    n2=num2;

    while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"GCD: "<<n1<<endl;
    return 0;
}
