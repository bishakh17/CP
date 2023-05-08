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
    vector<int> b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];

    int l = 0;
    int r = n-1;

    while(l<n && a[l]==b[l]){
        l++;
    }
    while(r>=0 && a[r]==b[r]){
        r--;
    }


    if(l>r){
        int ans = 1;
        int count = 1;
        int l2 = 0; int r2 = -1;
        int l1 = 0; int r1 = 0;
        for(int i = 1; i<n; i++){
            if(a[i]<=a[i-1]){
                r2 = i;
                count++;
            }
            else{
                if(count>ans){
                    ans = count;
                    l1 = l2;
                    r1 = r2;
                }
                l2 = i;
                r2 = i;
            }
        }
        if(count>ans){
            ans = count;
            l1 = l2;
            r1 = r2;
        }
        if(ans==1){
            cout<<1<<" "<<1<<endl;
            return;
        }
        else{
            cout<<l1+1<<" "<<r1+1<<endl;
            return;
        }
    }
    else{
        while(l>0){
            if(b[l]>=b[l-1]) l--;
            else break;
        }
        while(r<n-1){
            if(b[r]<=b[r+1]) r++;
            else break;
        }
        cout<<l+1<<" "<<r+1<<endl;
        return;

    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}   