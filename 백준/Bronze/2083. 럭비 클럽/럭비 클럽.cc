#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    while (true) {
        string name;
        int age, weight;
        cin >> name >> age >> weight;

        if (name == "#" && age == 0 && weight == 0) break;

        if (age > 17 || weight >= 80) {
            cout << name << " Senior" << endl;
        } else {
            cout << name << " Junior" << endl;
        }
    }
}
