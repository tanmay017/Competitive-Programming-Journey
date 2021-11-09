//Resources to learn : https://youtu.be/v_qm2Sce7as (Youtube video of LUV Channel)
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
    //Simple Pointer
    int x = 4;
    int *p_x = &x;
    cout << "Value of &x : " << &x << " Value of p_x : " << p_x << endl;
    cout << "Value of x : " << x << " value of *p_x : " << *p_x << endl;

    *p_x = 5; // By changing value of x , value at p_x is also changed and vice-versa as it is pointing to same address
    cout << "New value of x after *p_x = 5 : " << x << endl;
    x = 6;
    cout << "New value at *p_x after x = 6 : " << *p_x << endl;
    cout << endl;

    //Double Pointer
    int **p_p_x = &p_x;
    cout << "Value of **p_p_x : " << **p_p_x << " Value of *p_x : " << *p_x << " Value of x : " << x << endl;
    cout << "Value of *p_p_x : " << *p_p_x << " Value of p_x : " << p_x << " Value of &x : " << &x << endl;
    cout << "Value of p_p_x : " << p_p_x << " Value of &p_x : " << &p_x << endl;
    cout << endl;

    //Array and Pointers
    int a[] = {2, 4, 6, 8, 10};
    cout << "Value of a : " << a << " Value of &a[0] : " << &a[0] << endl;
    cout << "Value of *a : " << *a << " Value of a[0] : " << a[0] << endl;
    cout << "Value of *(a+1) : " << *(a + 1) << " Value of a[1] : " << a[1] << endl;
    cout << endl;

    //Creating new array using pointer
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    c_p_c();

    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }

    c_p_c2();
}