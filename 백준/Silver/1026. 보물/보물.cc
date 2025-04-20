#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, sum = 0;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; ++i)
        cin >> v1[i];

    for (int i = 0; i < n; ++i)
        cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.rbegin(), v2.rend());

    for (int i = 0; i < n; ++i)
        sum += v1[i] * v2[i];

    cout << sum;
}