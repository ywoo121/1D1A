#include <iostream>
using namespace std;
int arr[101];

int main(void) {
    
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    int a, b, c;
    
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        for(int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}