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
    string a; cin>>a;
    string b; cin>>b;
    int ans = 0;
    unordered_map<char,int> mp;
    int count = 0;
    for(int i=0;i<n;i++){
        if(mp.find(a[i])==mp.end()){
            mp[a[i]] = count;
            count++;
        }
    }
    int size = mp.size();
    if(k>=size){cout((n*(n+1))/2); return;}
    size = pow(2,size);
    for(int i = 0; i<size; i++){
        int gg = __builtin_popcountll(i);
        int len = 0;
        if(gg==k){
            int j = 0; int m = 0;
            while(j<n){
                int pos = mp[a[j]];
                if(a[j]==b[j] or (((1<<pos)&i)!=0)){
                    len+=(j-m+1);
                    j++;
                }
                else{
                    j++;
                    m = j;
                }
            }
        }
        ans = max(ans,len);
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