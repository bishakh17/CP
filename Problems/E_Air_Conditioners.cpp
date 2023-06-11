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
    vector<pair<int,int>> a(k);
    for(int i=0; i<k; i++) cin>>a[i].first;
    for(int i=0; i<k; i++) cin>>a[i].second;
    sort(a.begin(), a.end());
    vector<int> left(n+1);
    vector<int> right(n+1);
    int mini = 1e12;
    int j = 0;
    for(int i=1; i<=n; i++){
        if(i==a[j].first){
            mini = min(mini, a[j].second-a[j].first);
            j++;
        }
        left[i] = mini;
    }
    mini = 1e12;
    j = k-1;
    for(int i=n; i>=1; i--){
        if(i==a[j].first){
            mini = min(mini, a[j].second+a[j].first);
            j--;
        }
        right[i] = mini;
    }
    for(int i=1; i<=n; i++){
        cout<<min(left[i]+i, right[i]-i)<<" ";
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