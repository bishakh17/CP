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
    for(int i = 0; i<n; i++) cin>>a[i];
    if(n==1){cout(1); return;}
    int gg = 0;
    for(int i = 1; i<n; i++){
        gg+=abs(a[i]-a[i-1]);
    }
    if(gg==0){cout(1); return;}
    int t;
    int ans = 0;
    if(a[1]>a[0]) t = 1;
    else if(a[1]==a[0]) t = 0;
    else t = -1;
    int i = 1;
    if(!t) ans++;
    while(i<n-1){
        int k;
        if(a[i]<a[i+1]) k = 1;
        else if(a[i]==a[i+1]) k = 0;
        else k = -1;
        if(k==t or k==0){
            ans++;
            i++;
        }
        else{
            t = k;
            i++;
        }
    }
    if(n-ans)
    cout(n-ans);

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}