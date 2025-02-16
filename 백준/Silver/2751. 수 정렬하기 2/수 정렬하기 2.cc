#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i : v) {
        cout << i << '\n';
    }

}
