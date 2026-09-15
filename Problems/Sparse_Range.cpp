#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int closest(const map<int,int> &mp, int x) {
    if(mp.empty()) return INT64_MAX;
    auto it = mp.lower_bound(x);
    if(it == mp.end()) return abs(prev(it)->first - x);
    if(it == mp.begin()) return abs(it->first - x);
    auto it2 = prev(it);
    return min(abs(it->first - x), abs(it2->first - x));
}


void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int ans = 0;
    int i = 0; int j = 0;
    map<int,int> mp;
    while (j<n) {
        int c = closest(mp, a[j]);
        if(c<k) {
            while(i<=j && c<k) {
                mp[a[i]]--;
                if(mp[a[i]]==0) {
                    mp.erase(a[i]);
                    c = closest(mp, a[j]);
                }
                i++;
            }
        }
        mp[a[j]]++;
        j++;
        ans += (j-i);
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