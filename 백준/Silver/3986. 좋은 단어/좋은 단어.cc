#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        stack<char> st;

        for (char ch : str) {
            if (!st.empty() && st.top() == ch) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        if (st.empty()) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}
