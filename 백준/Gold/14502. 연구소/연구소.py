from itertools import combinations

def bfs(lab, visited, n, m):
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    queue = []
    for i in range(n):
        for j in range(m):
            if lab[i][j] == 2:
                queue.append((i, j))
                visited[i][j] = True
    while queue:
        x, y = queue.pop(0)
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and lab[nx][ny] == 0:
                visited[nx][ny] = True
                queue.append((nx, ny))

def get_safe_area(lab, n, m):
    visited = [[False] * m for _ in range(n)]
    bfs(lab, visited, n, m)
    return sum(1 for i in range(n) for j in range(m) if lab[i][j] == 0 and not visited[i][j])

def max_safe_area(n, m, lab):
    empty_spaces = [(i, j) for i in range(n) for j in range(m) if lab[i][j] == 0]
    max_area = 0
    for walls in combinations(empty_spaces, 3):
        for x, y in walls:
            lab[x][y] = 1
        max_area = max(max_area, get_safe_area(lab, n, m))
        for x, y in walls:
            lab[x][y] = 0
    return max_area

n, m = map(int, input().split())
lab = [list(map(int, input().split())) for _ in range(n)]
print(max_safe_area(n, m, lab))