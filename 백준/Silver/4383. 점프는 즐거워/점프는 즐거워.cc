#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n;

    while (cin >> n) {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        set<int> diffs;
        for (int i = 0; i < n - 1; ++i) {
            int diff = abs(nums[i] - nums[i + 1]);
            if (diff >= 1 && diff <= n - 1) {
                diffs.insert(diff);
            }
        }

        if ((int)diffs.size() == n - 1) {
            cout << "Jolly\n";
        } else {
            cout << "Not jolly\n";
        }
    }
}
