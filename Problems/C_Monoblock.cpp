#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = n*(n+1)/2;
    for(int i = 1; i<n; i++){
        if(a[i]!=a[i-1]){
           ans+=(n-i)*i;
        }
    }

    while(m--){
        int i,x; cin>>i>>x;
        if(n==1){
            cout(1);
            continue;
        }
        i--;
        int left = 0;
        int right = 0;
        if(i!=0){
            if(a[i-1]!=a[i] and x==a[i-1]) left--;
            else if(a[i-1]==a[i] and x!=a[i-1]) left++;
        }
        if(i!=n-1){
            if(a[i+1]!=a[i] and x==a[i+1]) right--;
            else if(a[i+1]==a[i] and x!=a[i+1]) right++;
        }
        a[i] = x;
        ans += left*(n-i)*i;
        i++;
        ans += right*(n-i)*i;
        cout(ans);
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