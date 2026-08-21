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
    vector<int> temp(n+1,n+1);
    for(int i=0; i<m; i++){
        int a,b; cin>>a>>b;
        if(a>b) swap(a,b);
        temp[a] = min(temp[a],b);
    }
    int ans = 0;
    int j = -1;
    int br = n+1;
    int count = 0;
    for(int i = 1; i<=n;){
        if(i==br) {
            int x = br-j-1;
            ans -= (x*(x+1))/2;
            count = 0;
            br = n+1;
            i = j+1;
            j = -1;
            continue;
        }
        if(temp[i]<=br) {
            br = temp[i];
            j = i;
        }
        count++;
        ans += count;
        i++;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}