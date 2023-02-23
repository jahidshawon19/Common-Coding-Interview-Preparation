#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[], int n){

    int j=0;
    for(int i=0; i<n-1; i++){
        if(arr[i] != arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[n-1];

    return j;
}
int main(){
    int N;
    cin>>N;
    int data[N];

    for(int i=0; i<N; i++){
        cin>>data[i];
    }

    N=removeDuplicate(data, N);

    // print unique array

    for(int i=0; i<N; i++){
        cout<<data[i]<<" ";
    }
    return 0;
}





//https://www.youtube.com/watch?v=gf7vdIin0dk&ab_channel=VivekanandKhyade-AlgorithmEveryDay
