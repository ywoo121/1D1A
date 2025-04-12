#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;

    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
}