//Learning Resource : https://youtu.be/yEa0vkjJSf0 (Luv Channel)
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

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--) // should start from 31 but for our case 10 is much clear and enough
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
void solve()
{
    int a = 9;
    int i = 2;
    int j = 3;
    printBinary(a);

    //checks if i-th bit is set or not
    if ((a & (1 << i)) != 0)
        cout << "Bit is set" << endl;
    else
        cout << "Bit is unset" << endl;

    //invert
    cout << "Inverting : ";
    printBinary((~a));

    //set  i-th bit
    cout << "Setting " << i << "-th bit : ";
    printBinary((a | (1 << i)));

    //unset i-th bit
    cout << "Un-setting " << j << "-th bit : ";
    printBinary((a & ~(1 << j)));

    //toggle i-th bit
    cout << "Toggling " << i << "-th bit : ";
    printBinary((a ^ (1 << i)));

    //couting number of set-bits
    cout << "Number of set bits in number " << a << " using self implementation : ";
    int ctr = 0;
    for (int i = 31; i >= 0; --i)
    {
        if ((a >> i) & 1)
        {
            ctr++;
        }
    }
    cout << ctr << endl;
    cout << "Number of set bits in number " << a << " using in-built function for integers " << __builtin_popcount(a) << endl;
    cout << "Number of set bits in number " << a << " using in-built function for long long " << __builtin_popcountll(a) << endl;
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