
/*
    * * * *
    * * * *
    * * * *
    * * * *
*/
#include<bits/stdc++.h>
using namespace std;

int pattern(int n){

    for(int row=1; row<=n; row++){

        for(int col=1; col<=n; col++){

            cout<<"* ";
        }

        cout<<"\n";
    }
}

int main(){

    pattern(4);

    return 0;
}
