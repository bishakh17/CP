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
    vector<int> ans;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    if(a[n-1]){cout("NO"); return;}
    cout("YES");
    int i = n-1;
    while(i>=0){
        int zeros = 0;
        int ones = 0;
        while(i>=0 and a[i]==0){zeros++; i--;}
        while(i>=0 and a[i]==1){ones++; i--;}
        int temp = zeros+ones-1;
        while(temp--) ans.push_back(0);
        ans.push_back(ones);
    }
    reverse(ans.begin(),ans.end());
    for(int i = ans.size()-1; i>=0; i--) cout<<ans[i]<<" ";
    cout<<endl;
                                                                      

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}