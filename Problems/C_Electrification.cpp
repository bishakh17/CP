#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve() {
    string s;
    cin >> s;

    int left = 0;
    int right = 0;

    int z = 0, o = 0;

    for (char c : s) {
        if (c == '1') o++;
        else z++;
    }

    pair<int, int> out, in;
    out.first = z;
    out.second = o;
    in.first = 0;
    in.second = 0;
    int ans = max(out.second, in.first);

    if (s == "0") {
        cout << 0 << endl;
        return;
    }

    while (right < s.length()) {
        if (left > right) right = left;

        if (out.second > in.first) {
            if (s[right] == '0') {
                in.first++;
                out.first--;
            }
            else {
                in.second++;
                out.second--;
            }
            right++;
        }
        else {
            if (s[left] == '0') {
                in.first--;
                out.first++;
            }
            else {
                in.second--;
                out.second++;
            }
            left++;
        }

        ans = min(ans, max(out.second, in.first));
    }

    cout << ans << endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}