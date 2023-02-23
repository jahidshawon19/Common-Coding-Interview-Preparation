// 7*9*2 + 24*28*3 + 41*47*3 +.......+ N1*N2*N3

#include<bits/stdc++.h>
using namespace std;

int main(){

    int N1, N2, N3;
    int sum=0;
    cin>>N1>>N2>>N3;
    int a=7, b=9, c=2;

    while(a<=N1 && b<=N2 && c<=N3){
        sum=sum+a*b*c;
        a=a+17;  //24-7=17
        b=b=19; // 28-9 = 19
        c=c+1;  // 3-2=1
    }

    cout<<"Result= "<<sum<<endl;
}
