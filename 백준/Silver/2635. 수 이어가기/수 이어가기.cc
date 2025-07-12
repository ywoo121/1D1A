#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int first; cin >> first;
    int max_len = 0;
    vector<int> v;

    for (int second = 1; second <= first; second++) {
        vector<int> vv;
        vv.push_back(first);
        vv.push_back(second);

        int a = first;
        int b = second;

        while (true) {
            int n = a - b;
            if (n < 0) break;

            vv.push_back(n);
            a = b;
            b = n;
        }

        if (vv.size() > max_len) {
            max_len = vv.size();
            v = vv;
        }
    }
    cout << max_len << '\n';
    for (int i : v) {
        cout << i << " ";
    }
}
