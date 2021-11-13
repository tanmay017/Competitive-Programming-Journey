// https://codeforces.com/contest/1605/problem/B : Correct Solution : Self Solved but passed test cases in two tries wouldn't have been
//                                                                    abled to crack in live contest
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
    string str;
    cin >> str;
    int left = 0, right = n - 1;
    vector<int> res;
    while (left < right)
    {
        if (str[left] == '0' && str[right] == '0')
        {
            left++;
        }
        else if (str[left] == '0' && str[right] == '1')
        {
            left++, right--;
        }
        else if (str[left] == '1' && str[right] == '0')
        {
            res.push_back(left + 1);
            res.push_back(right + 1);
            left++;
            right--;
        }
        else if (str[left] == '1' && str[right] == '1')
        {
            right--;
        }
    }
    sort(res.begin(), res.end());
    if (res.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << res.size() << " ";
    for (auto idx : res)
        cout << idx << " ";
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