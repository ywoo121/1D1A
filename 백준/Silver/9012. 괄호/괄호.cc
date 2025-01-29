#include <iostream>
#include <stack>
using namespace std;

void sol(string str);

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int tc; cin >> tc;

    for (int i = 0; i < tc; i++) {
        string str; cin >> str;     // 괄호 문자열
        sol(str);
    }
}

void sol(string str) {
    stack<char> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            s.push(str[i]);
        } else {
            if (s.empty() == true) {
                cout << "NO" << '\n';
                return;
            } else {
                s.pop();
            }
        }
    }

    // 문자열 다 확인하고 난 후
    if (s.empty() == true) 
        cout << "YES" << '\n';
    else 
        cout << "NO" << '\n';
}