#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int a, b; cin >> a >> b;

    int n; cin >> n;

    vector<int> fav(n);
    for (int i = 0; i < n; ++i) {
        cin >> fav[i];
    }

    int minimum = abs(a - b);

    for (int i = 0; i < n; ++i) {
        int cnt = 1 + abs(fav[i] - b); 
        minimum = min(minimum, cnt);
    }

    cout << minimum << '\n';
}
