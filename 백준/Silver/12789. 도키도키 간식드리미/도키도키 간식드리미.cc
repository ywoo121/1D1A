#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num;
    cin >> n;

    stack<int> s;
    int st = 1;

    while (n--) {
        cin >> num;

        if (st == num) {
            st++;
        } else {
            while (!s.empty() && s.top() == st) {
                s.pop();
                st++;
            }
            s.push(num);
        }
    }

    while (!s.empty()) {
        if (s.top() == st) {
            s.pop();
            st++;
        } else {
            cout << "Sad" << endl;
            return 0;
        }
    }

    cout << "Nice" << endl;
}
