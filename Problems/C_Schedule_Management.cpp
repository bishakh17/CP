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
    vector<int> a(n);
    int high = 0;
    int low = 0;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        a[x-1]++;
        high = max(high,a[x-1]);
    }
    int mid = high/2;
    while(high>low){
        int tasks = 0;
        for(int i = 0; i<n; i++){
            double temp; 
            if(mid<=a[i]) temp = mid;
            else temp = a[i] + ((double)(mid-a[i]))/(double)2;
            tasks+=(int)temp;
        }
        if((int)tasks>=m) high = mid;
        else low = mid + 1;
        mid = (high+low)/2;
    }
    cout(mid);


}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}