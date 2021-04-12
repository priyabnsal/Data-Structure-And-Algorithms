#include<bits/stdc++.h>
using namespace std;

// int static t[n+1][w+1];
// memset(t, -1, sizeof(t));
// fill(t, t+sizeof(t),-1);


bool EqalSubset(int arr[],int n, int sum){
    bool t[n+1][sum+1];
    for(int i=0; i<n+1; i++){
        for(int j=0;j<sum+1;j++)
        if(i==0){
         t[i][j]=false;
        }
        else if(j==0){
         t[i][j]=true;
        }
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
             t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else {
             t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

int main(){

    int sum=0;
    int arr[] = {1,5,11,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
    }
    if(sum%2!=0){
            return false;
    }
        else
        if (EqalSubset(arr, n,sum/2) == true)
        cout<< "Found a subset";
    else
        cout<<"No subset with given sum";
    return 0;
}