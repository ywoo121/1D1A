#include <iostream>
#include <stack>
using namespace std;

string str;
stack<int> st;
int tmp, ans;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            st.push(0);
        } else if (str[i] == ')') {
            tmp = 0;
            while (st.top() != 0) {
                int i = st.top();
                st.pop();
                tmp += i;
            }
            st.pop();
            st.push(tmp);
        } else if (str[i] == 'H') {
            st.push(1);
        } else if (str[i] == 'C') {
            st.push(12);
        } else if (str[i] == 'O') {
            st.push(16);
        } else if (str[i] >= '2' && str[i] <= '9') {
            int num = str[i] - '0';
            int top = st.top();
            st.pop();
            st.push(num * top);
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    cout << ans;
}