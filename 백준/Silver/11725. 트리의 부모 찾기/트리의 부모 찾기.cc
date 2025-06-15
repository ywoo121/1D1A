#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

static int n;
static vector<vector<int>> v;   // 트리 정보 저장
static vector<bool> visited;
static vector<int> ans;
void DFS(int num);

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    v.resize(n+1);
    visited.resize(n+1);
    fill(visited.begin(), visited.end(), false);
    ans.resize(n+1);
    
    for (int i = 1; i < n; i++) {      // n-1개의 줄에 받으니까...!
        int s, e; cin >> s >> e;
        v[s].push_back(e);
        v[e].push_back(s);
    }
    
    DFS(1);
    
    for (int i = 2; i <= n; i++) {
        cout << ans[i] << '\n';
    }
}

void DFS(int num) {
    visited[num] = true;
    
    for (int i: v[num]) {
        if (visited[i] == false) {
            ans[i] = num;   // 부모 노드를 저장하기
            DFS(i);
        }
    }
}
