#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int max = 0; int idx;

    int arr[6] = {0,};

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 4; j++) {
            int tmp; cin >> tmp;
            arr[i] += tmp;
        }

        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }

    cout << idx << " " << arr[idx] << '\n';
}