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
    vector<int> b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    vector<int> v1(2*n+1,0);
    vector<int> v2(2*n+1,0);
    int count = 1;
    int i = 1;
    while(i<n){
        if(a[i]==a[i-1]) count++;
        else{
            v1[a[i-1]] = max(v1[a[i-1]],count);
            count = 1;
        }
        i++;
    }
    v1[a[n-1]] = max(v1[a[n-1]],count);
    count = 1;
    i = 1;
    while(i<n){
        if(b[i]==b[i-1]) count++;
        else{
            v2[b[i-1]] = max(v2[b[i-1]],count);
            count = 1;
        }
        i++;
    }
    v2[b[n-1]] = max(v2[b[n-1]],count);
    int ans = 0;
    for(int i=1; i<=2*n; i++){
        ans = max(ans,v1[i]+v2[i]);
    }
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}