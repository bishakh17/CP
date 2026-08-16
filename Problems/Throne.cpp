#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// Extended Euclid: returns g = gcd(a,b) and sets x,y with a*x + b*y = g.
int extgcd(int a, int b, int &x, int &y){
    if(b == 0){ x = 1; y = 0; return a; }
    int x1, y1;
    int g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

void solve(){
    int n, s, k; cin >> n >> s >> k;
    // Want smallest m >= 1 with m*K == -S (mod N)
    int g = __gcd(k, n);
    if(s % g != 0){ cout << -1 << endl; return; }

    int nn = n / g;          // reduced modulus
    int kk = k / g;          // coprime with nn
    int rhs = ((-s) % n + n) % n / g;   // (-S mod N) divided by g

    int x, y;
    extgcd(kk, nn, x, y);    // kk*x + nn*y = 1
    int inv = ((x % nn) + nn) % nn;

    int m = ( (__int128)rhs * inv ) % nn;
    if(m == 0) m = nn;       // need a positive number of moves
    cout << m << endl;
}

int32_t main(){
    fastio;
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
