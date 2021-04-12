#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){

    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
};

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    reverseArray(arr,0,n-1);
    cout<<endl<<"reversed Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}