#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> lv;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    float sum = 0.0, avg;
    
    // 값 삽입
    for (int i = 0; i < n; i++) {
        int level; cin >> level;
        lv.push_back(level);
    }

    // 정렬
    sort(lv.begin(), lv.end());

    // 절사평균으로 제외해야 하는 부분 (한방향 기준)
    int a = floor((n * 0.3 / 2)+0.5);

    // 합 구하기
    for (int i = a; i < n-a; i++) {
        sum += lv[i];
    }
    
    // 평균 구하기
    avg = sum / (n-(2*a));
    avg = floor(avg + 0.5);     // 반올림

    // 평균 출력 (n==0이면 0)
    if (n == 0) {
        cout << "0" << '\n';
    } else 
        cout << avg << '\n';
}