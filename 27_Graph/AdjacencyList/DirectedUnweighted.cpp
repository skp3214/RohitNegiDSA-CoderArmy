#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int vertex, edges;
    cin >> vertex >> edges;
    vector<vector<int>> AdjList(vertex);

    int u, v;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        AdjList[u].push_back(v);
    }

    for(int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for(int j = 0; j < AdjList[i].size(); j++) {
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
