#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> l(n);
    vector<pair<double,double>> p(m);
    for(int i=0;i<n;i++) cin>>l[i];
    for(int i=0;i<m;i++){
        int a,b,c; cin>>a>>b>>c;
        double temp1 = b;
        double temp2 = b;
        if(c<=0){temp1 = 1; temp2 = -1;}
        else{
            double temp = sqrt(4*a*c);
            temp1 -= temp;
            temp2 += temp;
        }
        p[i] = {temp1,temp2};
    }
    sort(l.begin(),l.end());
    for(int i = 0; i<m; i++){
        if(p[i].first>p[i].second){cout("NO"); continue;}
        int search = floor(p[i].first);
        int y = upper_bound(l.begin(),l.end(),search) - l.begin();
        if (y == n or (double)l[y]>=p[i].second) cout("NO");
        else{
            cout("YES");
            cout(l[y]);
        }
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