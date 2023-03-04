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
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    vector<int> temp(n+1, -1);
    for(int i = 0; i<n; i++){
        int j = (a[i]+1)/2;
        while(temp[j]==-1 and j<=n){
            temp[j] = i;
            j++;
        }
    }
    int ans = temp[b[0]/2];
    for(int i = 0; i<n; i++){
        ans = min(ans,i+temp[b[i]/2]);
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