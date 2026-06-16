#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjlist;

    void addedge(int u, int v, bool direction) {
        if (direction == 1) {
            adjlist[u].push_back(v);
        } else {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
    }

    void printadjlist() {
        for (auto i : adjlist) {
            cout << i.first << " -> ";

            for (auto j : i.second) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;

    g.addedge(0, 1, 1);
    g.addedge(0, 2, 1);
    g.addedge(1, 2, 1);

    g.printadjlist();

    return 0;
}