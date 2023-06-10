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
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> freq(n+1,0);
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    sort(freq.begin(),freq.end(),greater<int>());
    int ans = freq[0];
    int prev = freq[0];
    int i = 1;
    while(i<=n and prev>0){
        if(freq[i]>prev-1){
            ans+=prev-1;
            prev--;
        }
        else{
            ans+=freq[i];
            prev = freq[i];
        }
        i++;
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