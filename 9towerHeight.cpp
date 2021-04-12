# include <iostream>
#include<algorithm> 
using namespace std; 

int main(){
    int n; cout<<"n " ;cin>>n;
    int arr[n];
    cout<<"Array ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k; cout<<"k "; cin>>k;

    if(n==1)
        return 0;
    
    sort(arr,arr+n);
    int ans= arr[n-1]-arr[0];

    int small=arr[0]+k;
    int big= arr[n-1]-k;
    if(small>big){
        swap(small,big);
    }

    for (int i = 1; i < n-1; i++)
    {
        int sub=arr[i]-k;
        int add=arr[i]+k;

        if(sub>=small || add<=big){
            continue;
        }

        if(big-sub <=add-small)
            small = sub;
        else
        {
             big=add;
        }
        
    }
    int a= min(ans,big-small);
    
    cout<<a;
    
}






// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int k,n;
// 	    cin>>k>>n;
// 	    vector<int> v(n);
// 	    double sm = 0;
// 	    for(int i=0;i<n;i++){
// 	        cin>>v[i];
// 	        sm +=v[i];
// 	    }
// 	    sort(v.begin(),v.end());
//         int ans = v[n-1] - v[0];
//         int mn = v[0]+k;
//         int mx = v[n-1]-k;
//         if(mn>mx) swap(mn,mx);
// 	    for(int i=1;i<n-1;i++){
// 	       int add = v[i] +k;
// 	       int sub = v[i] -k;
// 	       if(sub >= mn || add<=mx)continue;
// 	       if (mx - sub <= add - mn) mn = sub; 
//            else mx = add; 
// 	    }
// 	    ans = min(ans,mx-mn);
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }