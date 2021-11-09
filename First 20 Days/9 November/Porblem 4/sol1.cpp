// https://codeforces.com/problemset/problem/1592/A : Correct Solution : Saw Editorial
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

void solve()
{
    int n, h;
    cin >> n >> h;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > x)
        {
            y = x;
            x = num;
        }
        else if (num > y)
        {
            y = num;
        }
    }
    int res = 2 * (h / (x + y));
    if (h % (x + y) == 0)
    {
        cout << res;
    }
    else if (h % (x + y) <= x)
    {
        cout << res + 1;
    }
    else
    {
        cout << res + 2;
    }
    cout << endl;
}

int32_t main()
{
    c_p_c();

    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}