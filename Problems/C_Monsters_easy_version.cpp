#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

struct SegTree {
    int n;
    vector<int> tree;
    vector<int> lazy;

    SegTree(int size) : n(size) {
        tree.resize(4 * n + 5);
        lazy.resize(4 * n + 5, 0);
        build(1, 1, n);
    }

    // Initialize tree[x] = x
    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = start;
            return;
        }
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }

    void push(int node) {
        if (lazy[node] != 0) {
            tree[2 * node] += lazy[node];
            lazy[2 * node] += lazy[node];
            tree[2 * node + 1] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
            lazy[node] = 0;
        }
    }

    // Range addition/subtraction
    void update(int node, int start, int end, int l, int r, int val) {
        if (l > end || r < start) return;
        if (l <= start && end <= r) {
            tree[node] += val;
            lazy[node] += val;
            return;
        }
        push(node);
        int mid = (start + end) / 2;
        update(2 * node, start, mid, l, r, val);
        update(2 * node + 1, mid + 1, end, l, r, val);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }

    // Find the leftmost index x where x - k_x < 0
    int find_first_negative(int node, int start, int end) {
        if (tree[node] >= 0) return -1;
        if (start == end) return start;
        push(node);
        int mid = (start + end) / 2;
        if (tree[2 * node] < 0) {
            return find_first_negative(2 * node, start, mid);
        } else {
            return find_first_negative(2 * node + 1, mid + 1, end);
        }
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    SegTree st(n);
    ll sum_A = 0;
    ll m = 0; // Number of elements in active set A

    for (int i = 0; i < n; ++i) {
        int v = a[i];
        
        // 1. Add current monster to set A
        sum_A += v;
        m++;
        st.update(1, 1, n, v, n, -1);

        // 2. If k_x > x exists, find and remove the useless element x
        if (st.tree[1] < 0) {
            int x = st.find_first_negative(1, 1, n);
            sum_A -= x;
            m--;
            st.update(1, 1, n, x, n, 1);
        }

        // 3. Compute cost for the prefix
        ll ans = sum_A - m * (m + 1) / 2;
        cout << ans << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}