#include <iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cout<<"n ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"k ";
    cin>>k;
    cout<< "Array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"Largest "<<arr[k-1]<<endl<<"Smallest "<<arr[n-k];
    
}