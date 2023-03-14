#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){

    // step-1: convert the string to lowercase

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // step-2: removing the white space

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

   // step-3: creating two copy of string
   string s1 = str;
   string s2 = str;

   // step-4: reverse a string s1
   reverse(s1.begin(), s1.end());

   //finally check palindrome
   return s1 ==  s2;

}
int main()
{
    string str;
    getline(cin, str);

    if(isPalindrome(str)){
        cout<<"Sentence is Palindrome.";
    }else{
        cout<<"Sentence is not Palindrome.";
    }
    return 0;
}
