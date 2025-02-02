#include <iostream>
using namespace std;

int col[15];
int n, ttl = 0;

bool promising (int i) {
    int k;
    bool s = true;
    k = 1;
    
    while (k < i && s) {
        if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i-k)) {
            s = false;
        }
        k++;
    }
    return s;
}

void queens (int i) {
    int j;

    if (promising(i)) {
        if (i == n) 
            ttl++;
        else {
            for (j = 1; j <= n; j++) {
                col[i+1] = j;
                queens(i+1);
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    queens(0);
    cout << ttl;
}