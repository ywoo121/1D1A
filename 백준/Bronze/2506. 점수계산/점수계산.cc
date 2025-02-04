#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int tmp = 1;
    int cnt = 0;    // 점수합

    for (int i = 0; i < n; i++) {    
        if (arr[i] == 1) {
           cnt += tmp * 1;
           tmp++; 
        } else {
            tmp = 1;
        }
    }
    cout << cnt;
}