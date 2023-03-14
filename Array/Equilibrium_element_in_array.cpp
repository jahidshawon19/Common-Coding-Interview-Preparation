#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0;
    int leftSum=0;
    int rightSum=0;

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    rightSum=sum;

    for(int i=0; i<n; i++){
        rightSum=rightSum-arr[i];

        if(leftSum==rightSum){
            cout<<arr[i]<<endl;
            break;
        }
        leftSum=leftSum+arr[i];
    }

    return 0;
}
