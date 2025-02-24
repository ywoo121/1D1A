#include <iostream>
#include <cctype>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        for (char &c: str) {
            c = tolower(c);
        }
        cout << str << '\n';
    }
}