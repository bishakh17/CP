#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int ndigits(int n){
    int ans = 0;
    while(n!=0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
void update(int l, int r, vector<int>& a){
    for(int i = l; i<=r; i++){
        a[i] = ndigits(a[i]);
    }
}

void solve(){
    int n,q; cin>>n>>q;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<q; i++){
        int x; cin>>x;
        if(x==1){
            int l,r; cin>>l>>r;
            l--; r--;
            update(l,r,a);
        }
        else{
            int k; cin>>k;
            cout(a[k-1]);
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}