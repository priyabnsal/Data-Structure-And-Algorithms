#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a={-3,1,4,-1,2,3,-2};
    int n= a.size();
    
    int max= INT8_MIN;
    // 2d approch with sum for o(n^2)}
    int sum[n];
    sum[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i; j < n ; j++){
            // 2n approch
            int cursum=sum[j]-sum[i]+a[i];
            // 1st approch niche wala k ka loop hai o(n^3)0  
            // int curSum=0;
            // for (int k = i; k <= j; k++){
            //     curSum += a[k];
            // }
            if(cursum>max){
                max=cursum;
            }
                        
        }
        
    }
    cout<<max;
    
}