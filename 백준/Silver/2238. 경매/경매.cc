#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int u, n; 
    cin >> u >> n;

    int price[10001];
    fill_n(price, 10001, 0);

    vector<pair<string,int> > v;
    v.reserve(n);

    for (int i = 0; i < n; i++) {
        string str; 
        int p;
        cin >> str >> p;
        price[p]++;
        v.push_back(make_pair(str, p));
    }

    int cnt = -1;
    for (int i = 1; i <= u; i++) {
        if (price[i] > 0 && (cnt == -1 || price[i] < price[cnt])) {
            cnt = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i].second == cnt) {
            cout << v[i].first << " " << v[i].second << "\n";
            break;
        }
    }
}
