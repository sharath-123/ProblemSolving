#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = *(&arr + 1) - arr;
    // int ans[n] = {0};
    int P;
    cin>>P; 
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=n-1;j<i;j++){
            if(arr[i]+arr[j]>P){
                ans[i] = arr[i];
                ans[i+1] = arr[j];
            }
            else {
                j--;
                i++;
            }
        }
    }
    int m =  *(&ans + 1) - ans;

    for(int i = 0 ;i < m ; i++ ){
        cout<<ans[i]<<endl;
    }
    // cout<< n << endl;
    return 0;
}