#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n; vector<int> v(n); for(int i=0;i<n;i++) cin>>v[i];
    if(n&1) {
        cout("NO");
        return;
    }
    vector<int> res(n);
    int i = 0, j = n/2;
    sort(v.begin(), v.end());

    while(j<n) {
        if(v[i]==v[j]) {
            cout("NO");
            return;
        }
        res[2*i] = v[i];
        res[2*i+1] = v[j];
        i++;
        j++;
    }
    for(int i=1;i<n;i++) {
        if(res[i] == res[i-1]) {
            cout("NO");
            return;
        }
    }
    cout("YES");
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
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