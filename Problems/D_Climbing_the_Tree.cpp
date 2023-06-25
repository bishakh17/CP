#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int days(int a, int b, int x){
    if(x<a) return 1;
    int ans = ceil((x-a)/(double)(a-b))+1;
    return ans;
}


void solve(){
    int q; cin>>q;
    int low = -1; int high = INT64_MAX;
    while(q--){
        int x; cin>>x;
        if(x==1){
            int a,b,n; cin>>a>>b>>n;
            int h = a + (n-1)*(a-b);
            int l = a + (n-2)*(a-b)+1;
            if(n==1){
                h = a;
                l = 1;
            }
            if(l>high or h<low){cout<<0<<" "; continue;}
            low = max(low,l);
            high = min(high,h);
            cout<<1<<" ";
        }
        if(x==2){
            int a,b; cin>>a>>b;
            int temp1 = days(a,b,low);
            int temp2 = days(a,b,high);
            if(temp1==temp2){cout<<temp1<<" "; continue;}
            cout<<-1<<" ";
        }
    }
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