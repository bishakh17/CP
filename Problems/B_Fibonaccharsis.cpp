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
    if(k>=30){
        cout(0);
        return;
    }
    vector<int> fb(31);
    fb[0] = 0;
    fb[1] = 1;
    for(int i=2;i<=30;i++){
        fb[i] = fb[i-1] + fb[i-2];
    }
    int f1 = fb[k-1];
    int f2 = fb[k];
    int ans = 0;
    for(int i = 0; i<=n; i++){
        int temp = i*f1;
        if(temp>n) break;
        if((n-temp)%f2==0){
            ans++;
        }
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