#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    set <string> s;
    for (int i = 0; i < n; i++) {
        string name, state;
        cin >> name >> state;

        if (state == "enter") {
            s.insert(name);
        } else 
            s.erase(name);
    }

    vector<string> V(s.rbegin(), s.rend());
    for (auto a : V)
        cout << a << "\n";
}