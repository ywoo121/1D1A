#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;

    queue<int> buffer;

    while (true) {
        int a; cin >> a;

        if (a == -1) break;

        if (a == 0) {
            if (!buffer.empty()) {
                buffer.pop(); 
            }
        } else {
            if ((int)buffer.size() < n) {
                buffer.push(a); 
            }
        }
    }

    if (buffer.empty()) {
        cout << "empty\n";
    } else {
        while (!buffer.empty()) {
            cout << buffer.front() << " ";
            buffer.pop();
        }
        cout << '\n';
    }
}