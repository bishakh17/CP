#include<bits/stdc++.h>
using namespace std;


struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // High-entropy bit mixer
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        // Random seed initialized once at program start
        static const uint64_t FIXED_RANDOM = 
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main() {
    unordered_map<int, int, custom_hash> mp;
    mp[1] = 2;
    mp[2] = 3;
    cout << mp[1] << " " << mp[2] << endl; // Output: 2 3
    return 0;
}