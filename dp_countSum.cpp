#include<bits/stdc++.h>
using namespace std;

// int static t[n+1][w+1];
// memset(t, -1, sizeof(t));
// fill(t, t+sizeof(t),-1);


int Subset(int arr[],int sum, int n){
    int t[n+1][sum+1];
    for(int i=0; i<n+1; i++){
        for(int j=0;j<sum+1;j++)
        if(i==0){
         t[i][j]=0;
        }
        else if(j==0){
         t[i][j]=1;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
             t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
            }
            else {
             t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
int main(){

    // memset(t, -1, sizeof(t));
    int arr[] = { 2,3,5,6,8,10 };
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
        cout<<Subset(arr, sum, n);
    return 0;
}