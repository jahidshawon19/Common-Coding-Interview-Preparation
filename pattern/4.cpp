/*
    1
    1 2
    1 2 3
    1 2 3 4
*/



#include<bits/stdc++.h>
using namespace std;


int pattern(int n){

    for(int row =1; row<=n; row++){

        for(int col=1; col<=row; col++){

            cout<<col<<" ";
        }

        cout<<"\n";
    }
}

int main()
{
    pattern(4);

    return 0;
}

