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
    if(n<=2){cout(0); return;}
    sort(a.begin(),a.end());
    int i = 0; int j = 2;
    int ans = 0;
    int temp = 0;
    while(j<n){
        if(a[j]-a[i]<=2){
            temp+=j-i-1;
            j++;
        }
        else{
            while(j-i>2 and a[j]-a[i]>2){
                ans+=temp;
                i++;
                temp-=(j-i-1);
            }
            if(a[j]-a[i]>2){
                i++;
                j++;
            }
        }
    }
    while(i<n-2){
        ans+=temp;
        i++;
        temp-=(j-i-1);
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