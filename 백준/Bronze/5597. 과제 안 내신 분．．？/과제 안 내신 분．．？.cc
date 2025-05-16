#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        
    int arr[31] = { 0, };

    for(int i = 0; i < 28; i++) {
        int a;cin >> a;
        arr[a] = 1;
    }

    for(int i = 1; i <= 30; i++) {
        if(arr[i] != 1) 
            cout << i << '\n';
    }
}
