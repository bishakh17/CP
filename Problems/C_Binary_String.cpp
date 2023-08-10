#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();

    int ones = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            ones++;
        }
    }
    int zeros = n-ones;
    int high = ones;
    int low = 0;
    int ans = -1;
    vector<int> suff(n+1,0);
    int cnt1 = 0; int cnt0 = 0;
    int i = n-1;
    while(i>=0){
        if(s[i]=='1'){
            cnt1++;
            suff[cnt1] = cnt0;
        }
        else{
            cnt0++;
            suff[cnt1] = cnt0;
        }
        i--;
    }
    while(low<=high){
        int mid = (low+high)/2;
        cnt1 = 0;
        cnt0 = 0;
        int i = 0;
        while(cnt1<=mid){
            if(cnt0 + suff[mid-cnt1]>=zeros-mid){
                ans = mid;
                high = mid-1;
                break;
            }
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
            i++;
        }
        if(ans!=mid){
            low = mid+1;
        }
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