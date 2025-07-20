#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;    // 수의 개수
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int cnt = 0;

    for (int k = 0; k < n; k++) {
        int find = v[k];
        int i = 0;
        int j = n-1;

        while (i < j) {
            if (v[i] + v[j] == find) {
                if (i != k && j != k) {
                    cnt++;
                    break;
                } else if (i == k) {
                    i++;
                } else if (j == k) {
                    j--;
                }
            } else if (v[i] + v[j] < find) {
                i++;
            } else if (v[i] + v[j] > find) {
                j--;
            }
        }
    }
    cout << cnt ;
}