#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
 

 
void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    if(is_sorted(a.begin(), a.end())){
        cout<<0<<endl;
        return;
    }
    int i = 0;
    int ans = 0;
    while(i<n){
        while(i<n and a[i]<=x) i++;
        if(i==n) break;
        swap(a[i], x);
        ans++;
        if(is_sorted(a.begin(), a.end())){
            cout<<ans<<endl;
            return;
        }
        i++;
    }
    cout<<-1<<endl;
}
 
int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}