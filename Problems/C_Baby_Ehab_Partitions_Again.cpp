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
    int t = -1;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        if(a[i]%2) t = i;
    }
    if(sum%2){
        cout(0);
        return;
    }
    if(t!=-1){
        cout(1);
        cout(t+1);
        return;
    }
    


}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}