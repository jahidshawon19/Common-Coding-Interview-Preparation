#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N,count=0,totalCount=0;
    cin>>M;
    cin>>N;
    for(int i=M; i<=N; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<" ";
            totalCount++;
        }
        count=0;
    }

    cout<<"\n"<<"TOTAL PRIME NUMBER: "<<totalCount<<endl;

    return 0;
}
