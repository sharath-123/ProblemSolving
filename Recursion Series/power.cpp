#include<iostream>
using namespace std;

int power(int a , int b){
    if(b==0) return 1;  //base case-1
    if(b==1) return a;  //base-case-2
    int ans = power(a,b/2);  //Recursive call
    if(b%2==0){
        return ans*ans;
    }
    else {
        return a*ans*ans;
    }
}

int main(){
    int a , b;
    cin>>a>>b;

    int x = power(a,b);

    cout<< " Answer is :"<< " " <<x<<endl;

}