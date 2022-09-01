#include<bits/stdc++.h>
using namespace std;

int getMissing(int arr[], int n){

    int N=n+1;
    int total = N*(N+1)/2;

    for(int i=0; i<n; i++){
        total = total-arr[i];
    }

    return total;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<getMissing(arr,n)<<endl;


    return 0;
}
