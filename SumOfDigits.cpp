#include<bits/stdc++.h>
using namespace std;

int sum (int a)
{
    int ans=0;
    for(int i=1;i<=a;i++)
        ans+=i;
    return ans;
    
}

int32_t main(){
    int n;
    cin>> n;
    cout<<sum(n);
}