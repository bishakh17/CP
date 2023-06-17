#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int p,f; cin>>p>>f;
    int cnt_s,cnt_w; cin>>cnt_s>>cnt_w;
    int s,w; cin>>s>>w;
    if(s>w){
        swap(s,w);
        swap(cnt_s,cnt_w);
    }
    int gg = min(cnt_s,p/s);
    int ans = 0;
    for(int i = 0; i<=gg; i++){
        int temp = i;
        int temp1 = min(cnt_w,(p-i*s)/w);
        int temp2 = min(cnt_s-i,f/s);
        int temp3 = min(cnt_w-temp1,(f-temp2*s)/w);
        ans = max(ans,temp+temp1+temp2+temp3);
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