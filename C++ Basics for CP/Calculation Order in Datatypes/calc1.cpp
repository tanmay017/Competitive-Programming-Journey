//Learn : https://www.youtube.com/watch?v=9S-b52CSCbQ&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=5 (Luv Channel : Specific Chapter)
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
    cout << 'a' + 1 << endl; // prints int -> 98 // as integer has higher precedence order
    cout << 7 / 2 << endl;   // prints int -> 3
    cout << 7 / 2.0 << endl; //prints float -> 3.5 as float has higher precedence order

    double a = 3 / 2;
    cout << a << endl; // prints 1 and proofs that calulation is done first than it is assigned to variable
}

int32_t main()
{
    c_p_c();

    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}