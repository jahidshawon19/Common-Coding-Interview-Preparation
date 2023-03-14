#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n){
    int s = 0;  // first index
    int e = n-1;   // last index

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    cout<<"After Reversed"<<endl;
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
