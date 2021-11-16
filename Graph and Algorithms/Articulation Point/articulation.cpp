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
vector<vector<int>> adj;
vector<int> vis;
vector<int> tin, low;
int timer;
void itIsCutpoint(int v)
{
    cout << v << " is a Cutpoint (Articulation Point)" << endl;
}

void dfs(int v, int p = -1)
{
    vis[v] = 1;
    tin[v] = low[v] = timer++;
    int children = 0;
    for (auto to : adj[v])
    {
        if (to == p)
            continue;
        if (vis[to])
        {
            //back-edge
            low[v] = min(low[v], tin[to]);
        }
        else
        {
            //foward edge
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] >= tin[v] && p != -1)
                itIsCutpoint(v);
            children++;
        }
    }
    if (p == -1 && children > 1)
        itIsCutpoint(v);
}

void addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void solve()
{
    timer = 0;
    int n, m;
    cin >> n >> m;
    adj.assign(n, vector<int>());
    vis.assign(n, 0);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
}

int32_t main()
{
    c_p_c();

    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}