/*#include <iostream>
#include <queue>
#define MAXLEN 300
using namespace std;

//체스말의 위치
int start_r, start_c; 

//체스말이 가고 싶은 위치
int goal_r, goal_c; 

// 이동방향
int dr[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dc[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

//정답
int ans;

//방문확인
bool visited[MAXLEN][MAXLEN];

//체스판
int map[MAXLEN][MAXLEN];

queue<pair<int, pair<int, int>>> q;

void init() {
    memset(map, 0, sizeof(map));
    memset(visited, 0, sizeof(visited));
}

int bfs(int r, int c, int ) {
    visited[r][c] = true;
    q.push(make_pair(0, make_pair(r, c)));


}

int main() {
    //테스트 케이스의 개수
    int tc; cin >> tc;
    for (int i = 0; i < tc; i++) {
        init();
        //체스판의 크기
        int l; cin >> l;
        cin >> start_r >> start_c;
        cin >> goal_r >> goal_c;

        //bfs 탐색
        bfs(start_r, start_c, 0);

        //정답 출력
        cout << ans << endl;
    }
    return 0;
}

*/

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int dr[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dc[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int adj[301][301];
bool visited[301][301];

int cur_r, cur_c, nxt_r, nxt_c, sz;

queue<pair<pair<int, int>, int>> q;

//bfs 탐색
int bfs() {
    int cnt = 0;
    while(!q.empty()) {
        auto [r, c] = q.front().first;
        int cnt = q.front().second;
        q.pop();
        adj[r][c] = cnt;
        for(int i = 0; i < 8; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nr < 0 || nr >= sz || nc < 0 || nc >= sz) continue;
            if(!visited[nr][nc]) {
                q.push({{nr, nc}, cnt+1});
                visited[nr][nc] = true;
            }
        }
    }
    return adj[nxt_r][nxt_c];
}


//값 넣기
void input() {
    cin >> sz;
    cin >> cur_r >> cur_c;
    cin >> nxt_r >> nxt_c;
}

//초기화
void init() {
    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));
}

//main
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int tc; cin >> tc;

    for(int t = 1; t <= tc; t++) {
        init();
        input();
        q.push({{cur_r, cur_c}, 0});
        visited[cur_r][cur_c] = true;
        cout << bfs() << endl;
    }
}