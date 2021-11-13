#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;

#define int long long
#define endl '\n' // Remove if Interactive Question
#define mod 1000000007
#define inf 1e18
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define vpi vector<pi>
#define mii map<int, int>
#define REP(i, x, y) for (int i = x; i < y; i++)
#define F first
#define S second
#define EB emplace_back
#define PRES(c, x) ((c).find(x) != (c).end())

//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//typedef trie<std::string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

void c_p_c()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void c_p_c2()
{
    clock_t begin = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void addEdge(int u, int v, int wt, vector<pair<int, int>> adj[])
{
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
}

void solve()
{
    int n, m, src;
    cin >> n >> m >> src;
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        addEdge(u, v, wt, adj); // todo
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // mean heap;
    vector<int> dist(n, 10000000);
    pq.push({0, src});
    dist[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto itr : adj[u])
        {
            int v = itr.first;
            int wt = itr.second;
            if (dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dist[i] << endl;
    }
}

int32_t main()
{
    c_p_c();

    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}