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
    int M = 1000000007;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 1;
    int used = 0;
    for(int i = n-1; i>=0; i--){
        int temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        if(temp==n){cout(0); return;}
        int temp2 = n - temp - used;
        if(temp2<=0){cout(0); return;}
        temp2 = temp2%M;
        ans = (ans*temp2)%M;
        used++;
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