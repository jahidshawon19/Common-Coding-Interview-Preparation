#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,8,12,3,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largestNumber = arr[0];
    int secondLargestNumber = arr[0];

    for(int i=0; i<n; i++){
        if(largestNumber<arr[i]){
            secondLargestNumber=largestNumber;
            largestNumber=arr[i];
        }else if(secondLargestNumber <arr[i]){
            secondLargestNumber=arr[i];
        }
    }

    cout<<secondLargestNumber<<endl;



    return 0;
}
