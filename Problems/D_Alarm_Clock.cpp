#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(k==1){
        cout(n);
        return;
    }
    if(n==1){
        cout(0);
        return;
    }
    sort(a.begin(),a.end());
    int j = 1;
    set<int> s;
    s.insert(a[0]);
    int ans = 0;
    while(j<n){
        int temp = s.size();
        if(!temp){
            s.insert(a[j]);
            j++;
            continue;
        }
        int curr = *(s.begin());
        if(a[j]-curr<m and temp+1<k){
            s.insert(a[j]);
            j++;
        }
        else if(a[j]-curr<m and temp+1==k){
            j++;
            ans++;
            continue;
        }
        else{
            s.erase(s.begin());
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}