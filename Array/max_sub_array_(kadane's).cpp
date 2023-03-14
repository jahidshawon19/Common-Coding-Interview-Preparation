#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int arr[], int n){

    int maxSum=0;
    int currentSum=0;

    for(int i=0; i<n; i++){
        currentSum = currentSum + arr[i];
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = maxSumSubArray(arr, n);
    cout<<"Max Sum of Sub Array= "<<result<<endl;

    return 0;
}
