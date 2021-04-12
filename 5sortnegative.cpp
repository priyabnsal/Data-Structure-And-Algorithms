#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
     cin>>n;
    int arr[n];
    cout<<"Enter Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=-1;
    int pivot=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    cout<<"Sorted Array: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 return 0;   
}