#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static vector<int> A;
int N, M;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> N;
    A.resize(N); // 0번째 인덱스부터 사용
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // A 배열 sort
    sort(A.begin(), A.end());
    
    cin >> M;
    for (int i = 0; i < M; i++) {
        int a; cin >> a;
        cout << binary_search(A.begin(), A.end(), a) << '\n'; // 0번째부터 검색
    }
}
