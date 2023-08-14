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
    vector<pair<int,int>> a(n);
    for(int i = 0; i<n; i++){
        int p,q,r,s; cin>>p>>q>>r>>s;
        a[i] = {p,s};
    }
    vector<pair<int,int>> b;
    sort(a.begin(),a.end());
    for(int i = 0; i<n; i++){
        if(b.size() == 0){
            b.push_back({a[i].first,a[i].second});
        }
        else{
            if(b[b.size()-1].second < a[i].first){
                b.push_back({a[i].first,a[i].second});
            }
            else{
                b[b.size()-1].second = max(b[b.size()-1].second,a[i].second);
            }
        }
    }
    int m = b.size();
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        int l = 0, r = m-1;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(b[mid].first<=x && b[mid].second>=x){
                ans = mid;
                break;
            }
            else if(b[mid].first>x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        if(ans==-1){
            cout<<x<<" ";
        }
        else{
            cout<<b[ans].second<<" ";
        }
    }
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