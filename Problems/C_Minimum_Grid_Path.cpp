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
    for(int i=0; i<n; i++) cin>>a[i];
    int ans = a[0]*n + a[1]*n;
    int min1 = a[0];
    int min2 = a[1];
    int sum1 = a[0];
    int sum2 = a[1];
    int cnt1 = 1;
    int cnt2 = 1;
    for(int i = 2; i<n; i++){
        if(i%2==0){
            min1 = min(min1, a[i]);
            sum1 += a[i];
            cnt1++;
        }
        else{
            min2 = min(min2, a[i]);
            sum2 += a[i];
            cnt2++;
        }
        int temp1 = sum1 + min1*(n-cnt1);
        int temp2 = sum2 + min2*(n-cnt2);
        ans = min(ans, temp1+temp2);
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