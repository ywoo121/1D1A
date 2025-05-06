#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    vector<int> num;
    int n;

    while (cin >> n) {
        num.push_back(n);
    }

    int max = 0;

    for (int i = 0; i < num.size(); ++i) {
        for (int j = i + 1; j < num.size(); ++j) {
            int cur = gcd(num[i], num[j]);
            if (cur > max) {
                max = cur;
            }
        }
    }

    cout << max << endl;
    return 0;
}
