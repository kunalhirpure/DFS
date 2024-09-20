def dfs(vertex, adj_list, visited):
    visited[vertex] = True
    print(vertex, end=" ")

    for adj_vertex in adj_list[vertex]:
        if not visited[adj_vertex]:
            dfs(adj_vertex, adj_list, visited)

num_vertices = 5  # Number of vertices
adj_list = [[] for _ in range(num_vertices)]

adj_list[0].append(1)
adj_list[1].append(0)

adj_list[0].append(2)
adj_list[2].append(0)

adj_list[1].append(3)
adj_list[3].append(1)

adj_list[2].append(4)
adj_list[4].append(2)

visited = [False] * num_vertices

print("DFS Traversal starting from vertex 0: ", end="")
dfs(0, adj_list, visited)
print()
