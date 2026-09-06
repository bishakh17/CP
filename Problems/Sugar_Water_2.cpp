#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int double
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void solve(){
    int n, m, k; 
    cin >> n >> m >> k;

    long long K_val = (long long)k;

    vector<pair<double, double>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    vector<pair<double, double>> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i].first >> b[i].second;
    }

    double l = 0.0, r = 1.0;
    double ans = 0.0;

    for(int iter = 0; iter < 100; iter++) {
        double mid = l + (r - l) / 2.0;

        
        vector<double> g(m);
        for(int j = 0; j < m; j++) {
            g[j] = b[j].first - mid * (b[j].first + b[j].second);
        }
        sort(g.begin(), g.end());

        
        long long count = 0;
        for(int i = 0; i < n; i++) {
            double target = -(a[i].first - mid * (a[i].first + a[i].second));
            auto it = lower_bound(g.begin(), g.end(), target);
            count += (g.end() - it);
        }

        if(count >= K_val) {
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
    }

    cout << fixed << setprecision(15) << ans * 100.0 << endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}