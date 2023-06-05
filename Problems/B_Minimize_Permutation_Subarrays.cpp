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
    int one,two,last;
    for(int i =0; i<n; i++){
        int x; cin>>x;
        if(x==1) one = i;
        if(x==2) two = i;
        if(x==n) last = i;
    }
    if(one<two && two<last){
        cout<<two+1<<" "<<last+1<<endl;
        return;
    }
    if(one<last && last<two){
        cout<<one+1<<" "<<one+1<<endl;
        return;
    }
    if(two<one && one<last){
        cout<<one+1<<" "<<last+1<<endl;
        return;
    }
    if(two<last && last<one){
        cout<<two+1<<" "<<two+1<<endl;
        return;
    }
    if(last<one && one<two){
        cout<<last+1<<" "<<one+1<<endl;
        return;
    }
    if(last<two && two<one){
        cout<<last+1<<" "<<two+1<<endl;
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