#include <iostream>
using namespace std;

int main() {
    int L, P;
    cin >> L >> P;

    int ttl = L * P;  

    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        cout << a - ttl << " ";
    }

    cout << endl;
}
