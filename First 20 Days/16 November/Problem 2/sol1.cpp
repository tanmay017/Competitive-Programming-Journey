// https://codeforces.com/problemset/problem/1607/D : Correct Solution : Self Solved
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
//#define F first
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
    int arr[n];
    string color;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> color;
    int min_blue = INT_MAX;
    int max_red = INT_MIN;
    vector<int> blue, red;
    for (int i = 0; i < n; i++)
    {
        if (color[i] == 'R')
        {
            max_red = max(max_red, arr[i]);
            red.push_back(arr[i]);
        }
        else
        {
            min_blue = min(min_blue, arr[i]);
            blue.push_back(arr[i]);
        }
    }
    if (min_blue < 1 || max_red > n)
    {
        cout << "NO" << endl;
        return;
    }
    sort(blue.begin(), blue.end());
    sort(red.begin(), red.end(), greater<int>());
    int curr1 = 1;
    for (auto num : blue)
    {
        if (num < curr1)
        {
            cout << "NO" << endl;
            return;
        }
        curr1++;
    }
    int curr2 = n;
    for (auto num : red)
    {
        if (num > curr2)
        {
            cout << "NO" << endl;
            return;
        }
        curr2--;
    }
    cout << "YES" << endl;
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