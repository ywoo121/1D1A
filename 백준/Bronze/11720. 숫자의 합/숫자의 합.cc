#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;

    string str;
    cin >> str;
    // cout << str << endl;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += str[i] - '0';
    }

    cout << sum << endl;
}