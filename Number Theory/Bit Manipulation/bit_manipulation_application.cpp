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
    //1. Checking parity of number
    cout << "Application 1 : Checking parity of number " << endl;
    int num = 15;
    cout << "Binary Representation of " << num << " : ";
    printBinary(15);
    int i = 3;
    if ((num & 1))
    {
        cout << num << " is odd" << endl;
    }
    else
    {
        cout << num << " is even" << endl;
    }
    cout << endl;

    //2. Multiplying and Dividing by 2
    cout << "Application 2 : Multiplying and Dividing by 2" << endl;
    cout << "2 * " << num << " = " << (num << 1) << endl;
    cout << "2 / " << num << " = " << (num >> 1) << endl;
    cout << endl;

    //3. Upper-Case and Lowercase Conversion
    cout << "Application 3 : Upper-Case and Lowercase Conversion" << endl;
    char A1 = 'A';
    char a11 = (A1 | (1 << 5));
    char a1 = (A1 | (' '));
    cout << A1 << " " << a1 << " " << a11 << endl;

    char a2 = 'a';
    char A2 = (a2 & '_');
    char A22 = (a2 & ~(1 << 5));
    char A222 = (a2 & ~(' '));
    cout << a2 << " " << A2 << " " << A22 << " " << A222 << endl;
    cout << endl;

    //4. Clear MSB (Meaning Un-setting all the bits from given i to left)
    cout << "Application 4 : Clear MSB" << endl;
    cout << "MSB clear of " << num << " : ";
    printBinary(num & ((1 << (i + 1)) - 1));
    cout << endl;

    //5. Clear LSB (Meaning Un-setting all the bits from given i to right)
    cout << "Application 5 : Clear LSB" << endl;
    cout << "LSB clear of " << num << " : ";
    printBinary(num & ~((1 << (i + 1)) - 1));
    cout << endl;

    //6. Power of 2 check
    cout << "Application 6 : Power of 2 check" << endl;
    if (num & (num - 1))
    {
        cout << "Not power of 2" << endl;
    }
    else
    {
        cout << "Is power of 2" << endl;
    }
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