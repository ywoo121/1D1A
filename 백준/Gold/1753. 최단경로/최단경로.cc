#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int distanceArr[20001];
vector<vector<pair<int, int> > > adList;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int numVertices, numEdges, startVertex;
    int from, to;
    int curVertex, curCost;
    int nextVertex, newCost;

    priority_queue<pair<int, int> > pq;
    
    cin >> numVertices >> numEdges;
    cin >> startVertex;
    adList.resize(numVertices + 1);
    
    for (int i = 0; i < numEdges; i++) {
        cin >> from >> to >> curCost;
        adList[from].push_back(make_pair(to, curCost));
    }
    
    for (int i = 1; i <= numVertices; i++) {
        distanceArr[i] = -1;
    }
    
    distanceArr[startVertex] = 0;
    pq.push(make_pair(0, startVertex));

    while (!pq.empty()) {
        curCost = -pq.top().first;
        curVertex = pq.top().second;
        pq.pop();
        
        if (distanceArr[curVertex] < curCost)
            continue;
        
        for (const auto &p : adList[curVertex]) {
            nextVertex = p.first;
            newCost = curCost + p.second;
            
            if (distanceArr[nextVertex] == -1 || newCost < distanceArr[nextVertex]) {
                distanceArr[nextVertex] = newCost;
                pq.push(make_pair(-newCost, nextVertex));
            }
        }
    }
    
    for (int i = 1; i <= numVertices; i++) {
        if (distanceArr[i] == -1)
            cout << "INF\n";
        else
            cout << distanceArr[i] << "\n";
    }
}
