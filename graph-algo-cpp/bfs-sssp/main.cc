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

        void bfs(int source, int dir) {
            std::queue<int> q;
            std::vector<bool> visited(count, false);
        
            q.push(source);
            visited[source] = true;
            std::vector<int> parent(count, -1);
            std::vector<int> dest(count, -1);
            dest[source] = 0;

            while (!q.empty()) {
                int d = q.front();
                q.pop();
                //std::cout << d << std::endl;
                for (int nei : l[d]) {
                    if (!visited[nei]) {
                        q.push(nei);
                        dest[nei] = dest[d] + 1;
                        parent[nei] = d;
                        visited[nei] = true;
                    }
                }
            }

            for (int i = 0; i < count; i++)
                std::cout << i << " = " << dest[i] << std::endl;

            int temp = parent[dir];
            std::cout << dir << " > ";
            while (temp != -1) {
                std::cout << temp << ' ';
                temp = parent[temp];
            }
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
    g.print();

    g.bfs(5, 1);

}
