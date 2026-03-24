#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string str; cin >> str;
    vector<int> v(26);

    for (auto c: str) {
        v[c - 'a']++;
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}