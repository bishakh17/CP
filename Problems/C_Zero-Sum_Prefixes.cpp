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
    int maxi = 0;
    int ans = 0;
    int sum = 0;
    int t = 0;
    unordered_map<int,int> temp;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(!t and x!=0){sum+=x; if(sum==0)ans++;}
        else if(x==0){ans+=maxi; maxi = 0; temp.clear(); sum = 0; temp[sum]++; maxi = max(maxi,temp[sum]); t = 1;}
        else if(t){sum+=x; temp[sum]++; maxi = max(maxi,temp[sum]);}        
    }
    ans+=maxi;
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