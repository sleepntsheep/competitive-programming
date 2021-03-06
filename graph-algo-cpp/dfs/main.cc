// adj list - unweighted - undirected
#include <iostream>
#include <list>
#include <queue>
#include <vector>

class Graph{
    int count; std::vector<std::list<int>> l;
        
    public:
        Graph(int count) {
            this->count = count;
            l.resize(count);
            for (std::list<int> i : l) 
                i = std::list<int>();
        }

        void addEdge(int u, int v) {
            l[u].push_back(v);
            l[v].push_back(u);
        }

        void print() {
            for (int i = 0; i < count; i++) {
                std::cout << i << " : ";
                for (auto j : l[i])
                    std::cout << j << ' ';
                std::cout << std::endl;
            }
        }

        void dfsHelper(int source, std::vector<bool> &visited) {
            visited[source] = true;
            std::cout << source << ' ';
            for (int nei : l[source]) {
                if (!visited[nei])
                    dfsHelper(nei, visited);
            }
        }

        void dfs(int source) {
            std::vector<bool> visited(count, false);
            dfsHelper(source, visited);
            std::cout << " : SDF" << std::endl;
        }
};

int main() {
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(4, 6);
    g.addEdge(6, 5);
    std::cout << "DFS: ";
    g.dfs(3);
}
