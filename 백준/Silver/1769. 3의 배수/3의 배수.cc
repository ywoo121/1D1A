#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string x; cin >> x;

    int cnt = 0;

    while (x.length() > 1) {
        int sum = 0;
        for (char c : x) {
            sum += c - '0';  
        }
        x = to_string(sum);  
        cnt++;
    }

    cout << cnt << '\n';

    if (x == "3" || x == "6" || x == "9") {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
