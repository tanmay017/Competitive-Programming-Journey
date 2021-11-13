// https://codeforces.com/problemset/problem/1605/C : Saw Editorial : Almost got solution did'nt considered edges cases
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
    int n;
    string str;
    cin >> n >> str;
    int ans = INT_MAX;
    for (int i = 0; i < str.size(); i++)
    {
        vector<int> ctr(3, 0);
        ctr[str[i] - 'a']++;
        for (int j = i; j < min((int)str.size(), i + 7); j++)
        {
            ctr[str[i] - 'a'];
            if (ctr[0] > ctr[1] && ctr[0] > ctr[2])
            {
                ans = min(ans, j - i + 1);
            }
        }
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
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