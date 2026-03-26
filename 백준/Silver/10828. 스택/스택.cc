//  스택

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack<int> s;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        if (str == "push") {
            int tmp;
            cin >> tmp;
            s.push(tmp);
        } else if (str == "pop") {
            if (s.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if (str == "size") {
            cout << s.size() << '\n';
        } else if (str == "empty") {
            if (s.empty()) {
                cout << "1" << '\n';
            } else {
                cout << "0" << '\n';
            }
        } else if (str == "top") {
            if (s.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << s.top() << '\n';
            }
        }
    }
    return 0;
}
