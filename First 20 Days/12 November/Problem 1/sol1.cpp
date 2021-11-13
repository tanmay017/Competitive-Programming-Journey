// https://codeforces.com/contest/1581/problem/A : Correct Solution : Got stuck in this problem need to saw editorial and video
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
    cin >> n;
    int ans = 1;
    for (int i = 3; i <= 2 * n; i++)
    {
        ans = (ans * i) % mod;
    }
    cout << ans << endl;
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

/* Explanation suppose you have permutation p = [1, 2, 3, 4] and number of p(i) < p(i + 1) is equal to k. Then for permuation
   q = [4, 3, 2, 1] (reverse p) will be 2n - k - 1. Since the are occuring in pair and total permutation 2n!. Our answer will be 2n! / 2 */