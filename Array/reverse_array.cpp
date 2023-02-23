#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n){

    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int N;
    cin>>N;
    int data[N];

    for(int i=0; i<N; i++){
        cin>>data[i];
    }

    reverseArray(data, N);


    return 0;
}
