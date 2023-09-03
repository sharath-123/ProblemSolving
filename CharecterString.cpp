#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0;name[i]!= '\0' ;i++){
        count++;
    }
    return count;
}

int reverse(char name[], int n){
    int x = 0;
    int y = n-1;
    
    while(x<y){
        swap(name[x++],name[y--]);
    }

}
int lowercase(char ch){
    if((ch >='a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    return ch;
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
int palindrome(char name[],int len){
    int s = 0;
    int e = len-1;

    while(s<=e){
        if(name[s] != name[e]){
            return false;
        }
        else{
             s++-;
             e--;
        }
    }
    return true;
}
int main(){
    char name[10];
    cin>>name;
    cout<<"your name is : "<<name<<endl;
    cout<<"length : "<< getLength(name)<<endl;
    int len = getLength(name);
    reverse(name, len);
    cout<< "Reversed string : "<< name << endl;
    cout<<"Palindrome : "<<palindrome(name,len)<<endl;
return 0;
}

