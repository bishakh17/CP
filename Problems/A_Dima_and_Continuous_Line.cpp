#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n; j++){
            if(i==j) continue;
            int a = min(nums[i],nums[i-1]);
            int b = max(nums[i],nums[i-1]);
            int c = min(nums[j],nums[j-1]);
            int d = max(nums[j],nums[j-1]);
            if(b>c and b<d and a<c){
                cout("yes");
                return;
            }
            if(b>d and a<d and a>c){
                cout("yes");
                return;
            }
        }
    }
    cout("no");
    return;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}