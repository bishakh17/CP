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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int x,a; cin>>x>>a;
    int y,b; cin>>y>>b;
    if(x>y){
        swap(x,y);
        swap(a,b);
    }
    int k; cin>>k;
    sort(v.begin(),v.end(),greater<int>());
    vector<int> pref(n+1,0);
    for(int i=0;i<n;i++) pref[i+1] = pref[i]+v[i];
    int ans = -1;
    for(int i = 0; i<=n; i++){
        int lcm = (a*b)/__gcd(a,b);
        int cnt_lcm = i/lcm;
        int cnt_x = i/a - cnt_lcm;
        int cnt_y = i/b - cnt_lcm;
        int sum = pref[cnt_lcm]*(x+y)/100;
        sum += (pref[cnt_y+cnt_lcm]-pref[cnt_lcm])*(y)/100;
        sum += (pref[cnt_x+cnt_y+cnt_lcm]-pref[cnt_lcm+cnt_y])*(x)/100;
        if(sum>=k){
            ans = i;
            break;
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