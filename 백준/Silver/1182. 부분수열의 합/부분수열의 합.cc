#include <iostream>
#include <vector>
using namespace std;

int n, s; 
vector<int> v(20);
int cnt = 0;

void solve(int idx, int sum) {
    sum += v[idx];

    if (sum == s) {
        cnt ++;
    }

    for (int i = idx + 1; i < n; i++) {
        solve(i, sum); 
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        solve(i, 0);
    }
    
    cout << cnt;

}