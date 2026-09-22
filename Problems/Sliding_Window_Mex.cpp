#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> count(k, 0);
    set<int> temp;
    for(int i=0;i<k;i++) temp.insert(i);
    for(int i=0;i<k;i++){
        if(a[i] < k) {
            count[a[i]]++;
            if(count[a[i]] == 1) temp.erase(a[i]);
        }
    }
    for(int i=k;i<n;i++){
        if(temp.empty()) cout<<k<<" ";
        else cout<<*temp.begin()<<" ";
        if(a[i-k] < k) {
            count[a[i-k]]--;
            if(count[a[i-k]] == 0) temp.insert(a[i-k]);
        }
        if(a[i] < k) {
            count[a[i]]++;
            if(count[a[i]] == 1) temp.erase(a[i]);
        }
    }
    if(temp.empty()) cout<<k<<" ";
    else cout<<*temp.begin()<<" ";

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}