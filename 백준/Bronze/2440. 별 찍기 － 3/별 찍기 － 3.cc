#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;


    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << '\n';
    }

}
