//  서로 다른 부분 문자열의 개수

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    set<string> ans;

    int l = s.length();

    for (int i = 0; i < l; i++) {
        for (int j = i; j < l; j++) {
            string str = s.substr(i, j - i + 1);
            ans.insert(str);
        }
    }
    cout << ans.size();
}
