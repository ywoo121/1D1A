#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, m;
    cin >> n >> m;
    int array[101];
 
    for (int i = 1; i < n + 1; i++) {
        array[i] = i;
    }
 
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        swap(array[a], array[b]);
    }
 
    for (int i = 1; i < n + 1; i++) {
        cout << array[i] << " ";
    }
	return 0;
}