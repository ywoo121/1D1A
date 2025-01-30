#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;

    pair<int, int> p[n];

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p[i].first = x; p[i].second = y;
    }

    sort(p, p+n, compare);

    for (int i = 0; i < n; i++) {
        cout << p[i].first << " " << p[i].second << '\n';
    }   
}