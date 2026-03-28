//  스택 수열

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    stack<int> st;
    vector<char> res;

    // 다음에 push할 숫자
    int nextNum = 1;

    for (int i = 0; i < n; i++) {
        int target;
        cin >> target;

        // target이 나올 때까지 push
        while (nextNum <= target) {
            st.push(nextNum++);
            res.push_back('+');
        }

        // top이 target이면 pop
        if (!st.empty() && st.top() == target) {
            st.pop();
            res.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    for (char op: res) {
        cout << op << '\n';
    }

    return 0;
}
