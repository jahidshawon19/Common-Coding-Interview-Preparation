#include<bits/stdc++.h>
using namespace std;
int main()
{
    int data[7] ={5,7,1,3,6,2,4};
    int size = sizeof(data)/sizeof(data[0]);
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(data[i]>data[j]){
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<data[i]<<" ";
    }
    return 0;
}
