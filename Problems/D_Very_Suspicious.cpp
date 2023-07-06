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
    int high = 1e6; int low = 1;
    int ans = -1;

    while(low<=high){
        int mid = (low+high)/2;
        int temp = mid/3;
        int gg = temp*(temp+1);
        temp = temp*2;
        gg += temp*(temp+1)/2;
        if(mid%3==2) gg+=2*temp+3;
        else if(mid%3==1) gg+=temp+1;
        if(2*gg>=n){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout(ans+1);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}