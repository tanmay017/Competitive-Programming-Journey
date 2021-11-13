#include <bits/stdc++.h>
using namespace std;
struct node
{
    int u;
    int v;
    int wt;
    node(int u, int v, int wt)
    {
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};

class DSU
{
    vector<int> root;
    vector<int> rank;

public:
    DSU(int m)
    {
        root = vector<int>(m);
        for (int i = 0; i < m; i++)
        {
            root[i] = i;
        }
        rank = vector<int>(m, 0);
    }

    int find(int x)
    {
        if (root[x] == x)
            return x;
        return root[x] = find(root[x]);
    }

    void unionn(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY)
        {
            if (rank[rootX] > rank[rootY])
            {
                root[rootY] = rootX;
            }
            else if (rank[rootY] > rank[rootX])
            {
                root[rootX] = rootY;
            }
            else
            {
                rank[rootX] += 1;
                root[rootY] = rootX;
            }
        }
    }

    int isConnected(int x, int y)
    {
        return find(x) == find(y);
    }
};

int main()
{
    int m, n;
    cin >> m >> n;
    DSU ds(m);
    vector<node> edges;
    for (int i = 1; i <= n; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    sort(edges.begin(), edges.end(), [](node a, node b)
         { return a.wt < b.wt; });

    int cost = 0;
    vector<pair<int, int>> mst;
    for (auto itr : edges)
    {
        if (!ds.isConnected(itr.u, itr.v))
        {
            cost += itr.wt;
            mst.push_back({itr.u, itr.v});
            ds.unionn(itr.u, itr.v);
        }
    }
    cout << cost << endl;

    for (auto itr : mst)
    {
        cout << itr.first << " " << itr.second << endl;
    }
}