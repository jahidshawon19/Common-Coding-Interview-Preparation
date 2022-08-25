
// sum of all digits in a number

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,temp,sum=0;
    cin>>N;
    temp=N;
    while(temp!=0){
        int rem = temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    cout<<sum<<endl;
    return 0;
}
