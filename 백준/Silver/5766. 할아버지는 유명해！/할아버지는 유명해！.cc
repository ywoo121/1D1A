#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    while (true) {
        int n, m; cin >> n >> m;
        if (n == 0 && m == 0) break;

        map<int, int> cnt;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                cnt[x]++;
            }
        }

        int maxv = 0;
        for (auto &p : cnt) {
            if (p.second > maxv) maxv = p.second;
        }

        int secv = 0;
        for (auto &p : cnt) {
            if (p.second < maxv && p.second > secv) secv = p.second;
        }

        vector<int> sec;
        for (auto &p : cnt) {
            if (p.second == secv) sec.push_back(p.first);
        }

        sort(sec.begin(), sec.end());

        for (size_t i = 0; i < sec.size(); ++i) {
            if (i > 0) cout << " ";
            cout << sec[i];
        }
        cout << endl;
    }
}