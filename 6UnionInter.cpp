#include <iostream>
using namespace std;

int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            cout << arr1[i++] << " "; 
  
        else if (arr2[j] < arr1[i]) 
            cout << arr2[j++] << " "; 
  
        else { 
            cout << arr2[j++] << " "; 
            i++; 
        } 
    } 
  
    /* Print remaining elements of the larger array */
    while (i < m) 
        cout << arr1[i++] << " "; 
  
    while (j < n) 
        cout << arr2[j++] << " "; 

    return 0;
} 

int printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else /* if arr1[i] == arr2[j] */
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
        } 
    } 
    return 0;
}

int main(){
int arr1[] = { 1, 2, 4, 5, 6 }; 
    int arr2[] = { 2, 3, 5, 7 }; 
  
    int m = sizeof(arr1) / sizeof(arr1[0]); 
    int n = sizeof(arr2) / sizeof(arr2[0]); 
  
    // Function calling 
    cout<<"Union" <<endl;
    printUnion(arr1, arr2, m, n);
    cout<<endl<<"Intersection  "<<endl;
    printIntersection(arr1, arr2, m, n); 
}
    // int arr1[]={1,2,3,4,5};
    // int arr2[]={7,8,9};
    // // union= all the elements

    // int n=sizeof(arr1)/sizeof(arr1[0]);
    // int m=sizeof(arr2)/sizeof(arr2[0]);
    // int i = 0, j=0;
    // while(i<n && j<m){
    //     if(arr1[i]<arr2[j]){
    //         cout<<arr1[i++]<<" ";
    //     }
    //     else if (arr2[j] < arr1[i]) 
    //         cout << arr2[j++] << " "; 
  
    //     else { 
    //         cout << arr2[j++] << " "; 
    //         i++; 
    //     } 
        
    // }
    //  /* Print remaining elements of the larger array */
    // while (i < n) 
    //     cout << arr1[i++] << " "; 
  
    // while (j < m) 
    //     cout << arr2[j++] << " "; 

  
    
     // cout<<"Union of Array:"; 
    // for(int i=0;i<n;i++) cout<<arr1[i];
    // for(int i=0;i<n;i++) cout<<arr1[i];