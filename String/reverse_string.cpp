#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string  reverse_string;
    getline(cin, str);
    for(int i=str.size()-1; i>=0; i--){
        reverse_string.push_back(str[i]);
    }
    cout<<reverse_string<<endl;

    return 0;
}
