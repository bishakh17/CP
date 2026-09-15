#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,p; cin>>n>>m>>p;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> b(m);
    map<int,int> mp;
    for(int i = 0; i<m; i++) {
        cin>>b[i];
        mp[b[i]]++;
    }
    vector<int> ans;
    int j = 0;
    int t = mp.size();
    while(j + (m-1)*p <n && j<p) {
        int i = j, k = j;
        map<int,int> mp1;
        int matched = 0;
        while(i<=j+(m-1)*p) {
            mp1[a[i]]++;
            if(mp1[a[i]]==mp[a[i]]) matched++;
            i += p;
        }
        if(matched == t) ans.push_back(k+1);
        while(i<n) {
            if(mp1[a[k]]==mp[a[k]]) matched--;
            mp1[a[k]]--;
            k += p;
            mp1[a[i]]++;
            if(mp1[a[i]]==mp[a[i]]) matched++;
            i += p;
            if(matched == t) ans.push_back(k+1);
        }
        j++;
    }
    sort(ans.begin(), ans.end());
    cout(ans.size());
    for(auto x: ans) cout<<x<<" ";
    cout<<endl;

}

int32_t main(){
    fastio;
    #ifndef ONLINE_JUDGE
        // Redirect cin to read from input.txt in the same folder
        freopen("input.txt", "r", stdin);
        // Optional: Redirect cout to write to output.txt
        // freopen("output.txt", "w", stdout); 
    #endif
    while(T--){
        solve();
    }
    return 0;
}