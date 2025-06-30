#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

int main() {
    int n; cin >> n;
    
    int block[MAX] = {0}; // 기둥 
    int roof[MAX] = {0};   // 지붕

    int start = MAX, end = 0;

    for (int i = 0; i < n; i++) {
        int pos, h;
        cin >> pos >> h;
        block[pos] = h;
        start = min(start, pos);
        end = max(end, pos);
    }

    for (int i = start; i <= end; i++) {
        roof[i] = max(roof[i - 1], block[i]);
    }

    for (int i = end; i >= start; i--) {
        roof[i] = min(roof[i], max(roof[i + 1], block[i]));
    }

    int total = 0;
    for (int i = start; i <= end; i++) {
        total += roof[i];
    }

    cout << total << '\n';
}
