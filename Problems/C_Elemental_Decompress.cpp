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
    vector<pair<int,int>> a(n);
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a.begin(),a.end());
    vector<pair<int,int>> p(n);
    vector<pair<int,int>> q(n);
    vector<int> p_counter(n+1,0);
    vector<int> q_counter(n+1,0);
    int p_counteri = 1;
    int q_counteri = 1;
    int i = 0;
    while(i<n){
        int curr = a[i].first;
        if(p_counter[curr] and q_counter[curr]){cout("NO"); return;}
        else if(p_counter[curr]){
            while(p_counteri<=n and p_counter[p_counteri]){
                p_counteri++;
            }
            if(p_counteri>curr){cout("NO"); return;}
            q_counter[curr]=1;
            p_counter[p_counteri] = 1;
            p[i].first = a[i].second;
            p[i].second = p_counteri;
            q[i].first = a[i].second;
            q[i].second = curr;
        }
        else{
            while(q_counteri<=n and q_counter[q_counteri]){
                q_counteri++;
            }
            if(q_counteri>curr){cout("NO"); return;}
            p_counter[curr]=1;
            q_counter[q_counteri] = 1;
            q[i].first = a[i].second;
            q[i].second = q_counteri;
            p[i].first = a[i].second;
            p[i].second = curr;
        }
        i++;
    }
    cout("YES");
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
    for(int i = 0; i<n; i++){
        cout<<p[i].second<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<q[i].second<<" ";
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