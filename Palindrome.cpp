#include<iostream>
using namespace std;

int isPalindrome(string s[]) {
      int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return 0;
           else{
               start++;
               end--;
           }
       }
       return 1;
}
int main()
{
    string s[7] = "sharath" ;

    int p = isPalindrome(s);

    cout<<"palindrome is :"<<p<<endl;
    
    return 0;
}