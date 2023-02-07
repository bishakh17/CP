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
    vector<int> ans;
    vector<int> temp;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(x%2 and ans.size()<3) ans.push_back(i+1);
        else if(x%2==0 and temp.size()<2) temp.push_back(i+1);
    }
    if(ans.size()==0 or (ans.size()==2 and n==3)){cout("NO"); return;}
    cout("YES");
    cout<<ans[0]<<" ";
    if(temp.size()==2) cout<<temp[0]<<" "<<temp[1]<<endl;
    else cout<<ans[1]<<" "<<ans[2]<<endl;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}