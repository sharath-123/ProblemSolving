#include<iostream>
using namespace std;
int reverse(int x){
    int rev = 0;
    int sum = 0;
    while(x!= 0){
        sum = x % 10;
        rev = rev * 10+sum;
        x = x/10;
    }
    return rev;
}
int main(){
    int num;
    cin>> num;
    reverse(num);
    cout<<"Reverse : "<<reverse(num)<<endl;; 
}