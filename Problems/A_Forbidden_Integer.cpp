#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k,x; cin>>n>>k>>x;
    if(x!=1){
        cout("YES");
        cout(n);
        for(int i = 1; i<=n; i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    for(int i = 1; i<=k; i++){
        if(i==x) continue;
        int temp = n%i;
        if(temp!=x){
            cout("YES");
            int cnt = n/i;
            if(temp) cout(cnt+1);
            else cout(cnt);
            for(int j = 1; j<=cnt; j++){
                cout<<i<<" ";
            }
            if(temp!=0) cout<<temp<<" ";
            cout<<endl;
            return;
        }
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}