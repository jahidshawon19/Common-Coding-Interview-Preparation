#include<bits/stdc++.h>
using namespace std;
int getPairCount(int arr[], int n, int sum){

    unordered_map<int,int>m;
    int count = 0;

    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        count = count + m[sum-arr[i]];
        if(sum-arr[i] == arr[i]){
            count--;
        }
    }

    return count/2;

}
int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int sum = 6;
    int n = (sizeof(arr)/sizeof(arr[0]));

    cout<<getPairCount(arr, n, sum)<<endl;

    return 0;
}
