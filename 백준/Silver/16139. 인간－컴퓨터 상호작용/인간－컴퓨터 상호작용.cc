#include <iostream>
using namespace std;

int arr[26][200001];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string str; cin >> str;
    int q; cin >> q;


    int size = str.size();
    
    // 누적합 구하기
    for (int i = 0; i < size; i++) {
        int a = str[i] - 'a';

        for (int j = 0; j < 26; j++) {
            arr[j][i + 1] = arr[j][i]; 
        }
        arr[a][i + 1]++;  
    }

    for (int i = 0; i < q; i++) {
        char a; int l, r;
        cin >> a >> l >> r;

        int c = a - 'a';

        // 횟수 계산
        cout << arr[c][r+1] - arr[c][l] << '\n';
    }
}