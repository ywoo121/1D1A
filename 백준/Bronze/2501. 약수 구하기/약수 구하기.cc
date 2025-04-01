#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    vector<int> v;

    // 나누어 떨어지면 약수임
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i); 
        }
    }

    if (k <= v.size()) 
        cout << v[k - 1];
    else    
        cout << 0;
}