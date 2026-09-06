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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    int i = 0; int j = n-1;
    int ans = 0;
    int x = 0;
    while(i<=j) {
        if (a[i] + x < a[j]) {
            x += a[i];
            ans += a[i];
            i++;
        } else if (i==j) {
            int g = (a[i]+x)/2;
            ans += (g-x);
            a[i] = a[i] - (g-x);
            if(g>0) {
                ans++;
                a[i] -= g;
            }
            if(a[i]>0) ans++;
            break;
        }
        else {
            int g = a[j] - x;
            a[i] = a[i] - g;
            ans += g+1;
            x = 0;
            j--;
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