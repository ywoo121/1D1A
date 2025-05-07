import sys
import heapq

input = sys.stdin.read
data = input().splitlines()

N = int(data[0])
M = int(data[1])
graph = [[] for _ in range(N + 1)]

for i in range(2, M + 2):
    u, v, cost = map(int, data[i].split())
    graph[u].append((cost, v))

start, end = map(int, data[M + 2].split())

def dijkstra(start):
    distances = [float('inf')] * (N + 1)
    distances[start] = 0
    queue = [(0, start)]

    while queue:
        current_cost, current_node = heapq.heappop(queue)

        if current_cost > distances[current_node]:
            continue

        for next_cost, next_node in graph[current_node]:
            new_cost = current_cost + next_cost
            if new_cost < distances[next_node]:
                distances[next_node] = new_cost
                heapq.heappush(queue, (new_cost, next_node))

    return distances

min_costs = dijkstra(start)
print(min_costs[end])
                    