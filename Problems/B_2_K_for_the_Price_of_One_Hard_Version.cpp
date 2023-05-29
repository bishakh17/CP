#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,p,k; cin>>n>>p>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    int ans = 0;
    int ans_temp = 0;
    int count = p;
    int count_temp = p;
    int i_temp = 0;
    while(i_temp<=k){
        count = count_temp;
        if(count<0) break;
        ans = 0;
        int i = i_temp+k-1;
        while(count and i<n){
            if(count>=a[i]){
                ans+=k;
                count-=a[i];
                i+=k;
            }
            else break;
        }
        count_temp-=a[i_temp];
        ans_temp = max(ans_temp,ans+i_temp);
        i_temp++;
    }
    cout<<ans_temp<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}