// Resource to Learn : https://youtu.be/DYwhXwGj1L4 (Luv Channel)
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
    // And Operator
    cout << "And Operator" << endl;
    cout << "0 & 0 : " << (0 & 0) << endl;
    cout << "0 & 1 : " << (0 & 1) << endl;
    cout << "1 & 0 : " << (1 & 0) << endl;
    cout << "1 & 1 : " << (1 & 1) << endl;
    cout << endl;

    //OR Operator
    cout << "OR Operator" << endl;
    cout << "0 | 0 : " << (0 | 0) << endl;
    cout << "0 | 1 : " << (0 | 1) << endl;
    cout << "1 | 0 : " << (1 | 0) << endl;
    cout << "1 | 1 : " << (1 | 1) << endl;
    cout << endl;

    // XOR operator
    cout << "XOR Operator" << endl;
    cout << "0 ^ 0 : " << (0 ^ 0) << endl;
    cout << "0 ^ 1 : " << (0 ^ 1) << endl;
    cout << "1 ^ 0 : " << (1 ^ 0) << endl;
    cout << "1 ^ 1 : " << (1 ^ 1) << endl;
    cout << endl;

    // Left Shift
    cout << "Left Shift Operator" << endl;
    cout << "1 << 1 : " << (1 << 1) << endl;
    cout << "3 << 2 : " << (3 << 2) << endl;
    cout << endl;

    //Right Shift
    cout << "Right Shift Operator" << endl;
    cout << "8 >> 2 : " << (8 >> 2) << endl;
    cout << "14 >> 1 : " << (14 >> 1) << endl;
    cout << endl;
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