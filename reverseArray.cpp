#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     
 
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 
 
/* Driver function to test above functions */
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
   
    // printArray(arr, n);
     for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    // Function calling
    rvereseArray(arr, 0, n-1);
        cout << endl;
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    // printArray(arr, n);
     for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
        // cout << endl;
    }
    return 0;
}