#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int k; cin >> k;
    stack<int> s;

    for (int i = 0; i < k; i++) {
        int a; cin >> a;

        if (a == 0) {
            s.pop();
        } else {
            s.push(a);
        }
    }

    int sum = 0;    
    while (s.empty() == false) {
        sum += s.top();
        s.pop();
    }
    cout << sum << '\n';
}
