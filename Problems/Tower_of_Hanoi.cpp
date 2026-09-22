#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void hanoi(int n, int from, int to, int aux, vector<pair<int, int>> &moves){
    if(n==0) return;
    hanoi(n-1, from, aux, to, moves);
    moves.push_back({from, to});
    hanoi(n-1, aux, to, from, moves);
}

void solve(){
    int n; cin>>n;
    vector<pair<int, int>> moves;
    hanoi(n, 1, 3, 2, moves);
    cout(moves.size());
    for(auto move : moves){
        cout<<move.first<<" "<<move.second<<endl;
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}