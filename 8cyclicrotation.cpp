// C++ code for program 
// to cyclically rotate 
// an array by one 
# include <iostream> 
using namespace std; 

void rotate(int arr[], int n) 
{ 
	int x = arr[n - 1], i; 
	for (i = n - 1; i > 0; i--) 
	arr[i] = arr[i - 1]; 
	arr[0] = x; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5}, i; 
	int n = sizeof(arr) / 
			sizeof(arr[0]); 

	cout << "Given array is \n"; 
	for (i = 0; i < n; i++) 
		cout << arr[i]; 

	rotate(arr, n); 

	cout << "\nRotated array is\n"; 
	for (i = 0; i < n; i++) 
		cout << arr[i]; 

	return 0; 
} 

// This code is contributed by jit_t 




// # include <iostream> 
// using namespace std; 


// int main() {
// 	int t; cin >> t;
// 	while(t--)
// 	{
// 	    int n; cin >> n;
// 	    int arr[n];
// 	    for(int i = 0; i < n; i++)
// 	        cin >> arr[i];
// 	    int t = arr[n-1];
// 	    for(int i = n-1; i >= 1; i--)
// 	    {
// 	        arr[i] = arr[i-1];
// 	    }
// 	    arr[0] = t;
// 	    for(int i = 0; i < n; i++)
// 	        cout << arr[i] << " ";
// 	    cout << "\n";
// 	}
// 	return 0;
// }

// C++ code for program 
// to cyclically rotate 
// an array by one 

//*************************** Accpected in gfg practice below ans*******************************************

// # include <iostream> 
// using namespace std; 

// // this ques is running on infinite loop
// // Driver code 
// int main() 
// { 
//     int T, N, i;
// 	cin >> T;
	
// 	while(T--) {
// 	    cin >> N;
// 	    int a[N];
// 	    for(i=1; i<N; i++) {
// 	    	cin >> a[i];
// 		}
// 		cin >> a[0];
// 		for(i=0; i<N; i++) {
// 	    	cout << a[i] << " ";
// 		}
// 		cout << endl;
// 	}  
// }

// This code is contributed by jit_t 
