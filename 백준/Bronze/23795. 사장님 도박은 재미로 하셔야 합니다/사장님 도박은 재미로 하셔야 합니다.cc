#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int sum = 0;
    int input;

    while(true) {
        cin >> input;
        if(input == -1) {
            break;
        }
        sum += input;
    }

    cout << sum;

    return 0;
}