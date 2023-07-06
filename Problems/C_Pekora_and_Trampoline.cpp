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
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> temp(n,0);
    int ans = 0;
    for(int i = 0; i<n; i++){
        int gg = a[i]-1;
        for(int j = i+2; j<=min(n-1,i+a[i]); j++){
            temp[j]++;
        }
        if(temp[i]<=gg){
            ans+=gg-temp[i];
            continue;
        }
        if(i!=n-1)temp[i+1]+=temp[i]-gg;
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