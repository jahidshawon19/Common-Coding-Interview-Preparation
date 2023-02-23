#include<bits/stdc++.h>
using namespace std;

void findPairs(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }


}


int main()
{
    int n;
    cin>>n;
    int data[n];
    for(int i=0; i<n; i++){
        cin>>data[i];
    }

    findPairs(data,n);

    return 0;
}
