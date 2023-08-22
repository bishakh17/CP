#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,d; cin>>n>>m>>d;
    vector<int> a(m);
    for(int i = 0; i<m; i++){cin>>a[i];}
    int ans = 1;
    int prev = 1;
    for(int i = 0; i<m; i++){
        if(a[i]==1) continue;
        int temp = a[i] - prev;
        ans += temp/d;
        if(temp%d) ans++;
        prev = a[i];
    }
    int temp = n - prev;
    ans += temp/d;
    int cnt = 0;
    for(int i = 0; i<m; i++){
        if(a[i]==1) continue;
        int diff;
        if(i!=m-1 and i!=0) diff = a[i+1] - a[i-1];
        else if(i==m-1) diff = n - a[i-1];
        else diff = a[i+1] - 1;
        int gg1 = diff/d;
        if(diff%d==0 and i!=m-1) gg1--;
        int diff1;
        if(i!=0) diff1 = a[i] - a[i-1];
        else diff1 = a[i] - 1;
        int diff2; 
        if(i!=m-1) diff2 = a[i+1] - a[i];
        else diff2 = n - a[i];
        int gg2 = diff1/d + diff2/d;
        if(diff1%d==0) gg2--;
        if(diff2%d==0 and i!=m-1) gg2--;
        gg2++;
        if(gg1<gg2) cnt++;
    }
    if(cnt){
        cout<<ans-1<<" "<<cnt<<endl;
        return;
    }
    cout<<ans<<" "<<m<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}