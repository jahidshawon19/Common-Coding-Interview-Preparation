#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] ={50,25,10,5,70,60,40,20,35,30};
    int max = a[0];
    int min = a[0];

    for(int i=0; i<10; i++){
        if(a[i]>max){
            max = a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"MAXIMUM: "<<max<<endl;
    cout<<"MINIMUM: "<<min<<endl;
    return 0;
}
