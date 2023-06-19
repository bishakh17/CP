#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int ans = -1;
    int gg = 0;
    for(int i = 0; i<n-1; i++){
        if(a[i]<a[i+1]){
            for(int j = i; j>=0; j--){
                if(a[j]<a[i+1]){
                    gg+=a[i+1]-a[j];
                    a[j] = a[i+1];
                    if(gg>=k){
                        ans = j+1;
                        cout(ans);
                        return;
                    }
                }
            }
        }
    }
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