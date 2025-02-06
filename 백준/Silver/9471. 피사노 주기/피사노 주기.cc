#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int tc; cin >> tc;
    int n, m;

    for (int i = 1; i <= tc; i++) {
        cin >> n >> m;
        int tmp, ans = 0; 
        int a = 1; int b = 1;

        // 피사노 주기 구하기
        while (true) {
            int tmp = (a + b) % m;
            a = b; b = tmp;
            ans++;

            if (a == 1 && b == 1) 
                break;
        }
        cout << i << " " << ans << '\n';
    }
}

/*
1, 1이 나오게 되면 주기가 바뀐 것
-> 앞 수: a, 뒷 수: b
피보나치 수열을 다 계산하지 말고 mod한 수만 저장하자
*/