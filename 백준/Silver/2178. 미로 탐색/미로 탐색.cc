#include <iostream>
#include <queue>
#define MAX 101

using namespace std;

int dr[4] = {-1, 1, 0, 0};      //row
int dc[4] = {0, 0, -1, 1};      //column


int N, M;                       //미로 크기
int map[MAX][MAX];              //미로 배열
int visited[MAX][MAX];          //방문 배열
int cnt[MAX][MAX];              //기록 배열

queue<pair<int, int> >  q;         //저장 queue


//bfs 함수
void bfs(int start_r, int start_c) {
    visited[start_r][start_c] = 1;          //방문 체크
    q.push(make_pair(start_r, start_c));    //큐에 방문한 곳 삽입
    cnt[start_r][start_c]++;                //이동한 칸 1 

    //모든 곳 방문할 때까지
    while (!q.empty()) {
        
        int r = q.front().first;
        int c = q.front().second;

        q.pop();

        for (int i=0; i<4; ++i){

            int r_new = r + dr[i];
            int c_new = c + dc[i];

            if ( (0 <= r_new && r_new < N) && (0 <= c_new && c_new < M) 
            && !visited[r_new][c_new] && map[r_new][c_new] == 1 ){

                visited[r_new][c_new] = 1;              
                q.push(make_pair(r_new, c_new));      
                cnt[r_new][c_new] = cnt[r][c] + 1;    
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; ++i) {   
        string row;
        cin >> row;
        for (int j = 0; j < M; ++j) {
            map[i][j] = row[j]-'0';
        }
    }
    bfs(0,0);

    cout << cnt[N-1][M-1];
}