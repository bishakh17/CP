#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q; cin>>n>>q;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        ans+=a[i];
    }
    int previdx = -2;
    int prevval = -2;
    vector<int> temp(n,-1);
    for(int i = 0; i<q; i++){
        int t; cin>>t;
        if(t==1){
            int idx,x; cin>>idx>>x;
            idx--;
            if(temp[idx]>previdx){
                ans-=a[idx];
                ans+=x;
            }
            else{
                ans-=prevval;
                ans+=x;
            }
            cout(ans);
            temp[idx] = i;
            a[idx] = x;
        }
        else{
            int x; cin>>x;
            ans = x*n;
            cout(ans);
            previdx = i;
            prevval = x;
        }
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