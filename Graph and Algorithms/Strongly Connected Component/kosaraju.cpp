//Resources to learn: CLRS and Striver
//Kosaraju's Algorithm
#include <bits/stdc++.h>
using namespace std;

void addEdge(int u, int v, vector<vector<int>> &adj)
{
    adj[u].push_back(v);
}

void helperDfs(int src, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[src] = true;
    cout << src << " ";
    for (auto neighbours : adj[src])
    {
        if (!visited[neighbours])
            helperDfs(neighbours, adj, visited);
    }
}

void topologicalSort(int src, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st)
{
    visited[src] = true;
    for (auto neighbours : adj[src])
    {
        if (!visited[neighbours])
            topologicalSort(neighbours, adj, visited, st);
    }
    st.push(src);
}

vector<vector<int>> getTranspose(vector<vector<int>> &adj)
{
    int m = adj.size();
    vector<vector<int>> tranpose(m);
    for (int u = 0; u < m; u++)
    {
        for (auto v : adj[u])
        {
            tranpose[v].push_back(u);
        }
    }
    return tranpose;
}

int main()
{
    int m, n; //Number of vertices and Edges respectively
    cin >> m >> n;

    vector<vector<int>> adj(m);
    vector<bool> visited(m, false);
    stack<int> st;

    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v, adj);
    }

    for (int i = 0; i < m; i++) //Step 1: Sort vertices in there decreasing finishing time
    {
        if (!visited[i])
            topologicalSort(i, adj, visited, st);
    }

    vector<vector<int>> transpose = getTranspose(adj); // Step 2: Transpose the Graph such that u -> v. Becomes v -> u
    for (int i = 0; i < m; i++)
    {
        visited[i] = false;
    }

    while (!st.empty()) // Step3: Do dfs according to topologically sorted order to get strongly connected components
    {
        int src = st.top();
        st.pop();
        if (!visited[src])
            helperDfs(src, transpose, visited);
        cout << endl;
    }
}