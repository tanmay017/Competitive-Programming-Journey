#include <bits/stdc++.h>
using namespace std;

map<int, vector<pair<int, int>>> adj;

void addEdge(int u, int v, int wt)
{
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        addEdge(u, v, wt);
    }

    int parent[m];
    bool mst_set[m];
    int key[m];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < m; i++)
    {
        parent[i] = -1;
        mst_set[i] = false;
        key[i] = INT_MAX;
    }

    for (int ctr = 0; ctr < m - 1; ctr++)
    {
        int u = pq.top().second;
        pq.pop();
        mst_set[u] = true;

        for (auto itr : adj[u])
        {
            int v = itr.first;
            int weight = itr.second;
            if (mst_set[v] == false && weight < key[v])
            {
                parent[v] = u;
                key[v] = weight;
                pq.push({key[v], v});
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << parent[i] << " - " << i;
    }
}