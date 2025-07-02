#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;        // 차량의 수
    string s;

    map<string, int> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> s;
        m[s] = i;       // 들어온 순서대로 기록
    }

    for (int i = 0; i < n; i++) {
        cin >> s;
        v[i] = m[s];    // 나오는 차량을 들어온 번호대로 벡터에 저장
    }

    int cnt = 0;    // 추월한 차량의 개수

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
}

/*
4           차량개수 (n)
ZG431SN
ZG5080K
ST123D
ZG206A      //여기까지 대근이가 적은 차량 번호 목록 (들어가는)
ZG206A      
ZG431SN
ZG5080K
ST123D      // 여기까지는 영식이가 적은 차량 번호 목록 (나오는)


추월 계산
i가 j보다 먼저 들어갔는데, i가 j보다 늦게 나오면
j가 추월한 거 => 개수 증가하고 반복문 종료
*/