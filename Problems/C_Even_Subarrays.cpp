#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<int> m(2*n+1);
    int count = 0;
    int k = 0;
    m[k]++;
    for(int i = 0; i<n; i++){
        k = k^nums[i];
        for(int t = 0; t*t<=2*n; t++){
            int temp = (t*t)^k;
            if(temp<=2*n)count+=m[temp];  
        }
        m[k]++;
    }
    int ans = (n*(n+1)/2)-count;
    
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}