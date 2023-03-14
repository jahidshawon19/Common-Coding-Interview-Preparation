#include<bits/stdc++.h>
using namespace std;


void reverseString(char str[], int len){

    int s=0;   // start index of str[]
    int e=len-1; // last index od str[]
    while(s<e){
        swap(str[s], str[e]);

        s++;
        e--;

    }

    cout<<str<<endl;


}
int main(){

    char str[50];
    cin>>str;
    int len=0;


    for(int i=0; str[i] != '\0'; i++){
        len++;
    }

    reverseString(str,len);



    return 0;
}
