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
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int min_diff = INT_MAX;
    int min_diff_index = -1;
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]<min_diff){
            min_diff = a[i+1]-a[i];
            min_diff_index = i;
        }
    }
    vector<int> ans(n);
    ans[0] = a[min_diff_index];
    ans[n-1] = a[min_diff_index+1];
    int j = 1;
    for(int i=min_diff_index+2; i<n; i++){
        ans[j] = a[i];
        j++;
    }
    for(int i=0; i<min_diff_index; i++){
        ans[j] = a[i];
        j++;
    }
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}