#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string str; cin >> str;

    string ans = "z";

    int len = str.length();

    for (int i = 1; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            string str1 = str.substr(0, i);
            string str2 = str.substr(i, j - i);
            string str3 = str.substr(j);

            reverse(str1.begin(), str1.end());
            reverse(str2.begin(), str2.end());
            reverse(str3.begin(), str3.end());

            string ttl = str1 + str2 + str3;

            if (ttl < ans) {
                ans = ttl;
            }
        }
    }       

    cout << ans << '\n';
}
