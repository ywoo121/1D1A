#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, l; cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i  < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int cnt = 1;
    int start = v[0];

    for (int i = 1; i < v.size(); i++) {
        int now = v[i];
        if (v[i] - start < l) {
            continue;
        } else {
            cnt++;
            start = v[i];
        }
    } 
    cout << cnt;

}