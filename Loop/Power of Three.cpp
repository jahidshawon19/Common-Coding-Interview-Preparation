#include<bits/stdc++.h>

using namespace std;

bool powerOfThree(int x){
    if(x<1){
        return false;
    }
    while(x%3 == 0){
        x=x/3;
    }


    if(x==1){
        return true;
    }else{
        return false;
    }
}

int main()
{
    long long int n;
    cin>>n;

   cout<< powerOfThree(n)<<endl;;



}
