// Learning Resource : https://www.youtube.com/watch?v=75yC1vbS8S8&list=PLgUwDviBIf0rGEWe64KWas0Nryn7SCRWw&index=28
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
struct node
{
    int u, v, wt;
    node(int u, int v, int wt)
    {
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
};
void solve()
{
    int n, m, src;
    cin >> n >> m >> src;
    vector<node> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    vector<int> dist(n, 10000000);
    dist[src] = 0; // here 0 is source
    for (int i = 0; i < n - 1; i++)
    {
        for (auto edge : edges)
        {
            int u = edge.u;
            int v = edge.v;
            int wt = edge.wt;
            if (dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    bool flag = false;
    for (auto edge : edges)
    {
        int u = edge.u;
        int v = edge.v;
        int wt = edge.wt;
        if (dist[v] > dist[u] + wt)
        {
            cout << "Negative Cycle";
            flag = true;
            break;
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
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}