#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,temp;
    cout<<"Number of Elements: "<<endl;
    cin>>N;
    int myArr[N];

    for(int i=0; i<N; i++){
        cin>>myArr[i];
    }

    int size = sizeof(myArr)/sizeof(myArr[0]);

    for(int i=0; i<(size/2); i++){
        temp = myArr[i];
        myArr[i] = myArr[size-1-i];
        myArr[size-1-i]=temp;
    }

    cout<<"Display Reverse Elements"<<endl;
    for(int i=0; i<size; i++){
        cout<<myArr[i]<<" ";
    }

    return 0;
}
