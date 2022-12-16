#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cstring>
#include <deque>
#include <queue>
 
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (int)(a).size()
 
#define x first
#define y second
 
#define pub push_back
#define pob pop_back
 
#define puf push_front
#define pof pop_front
 
 
#define int long long
#define double long double
 
#define int __int128
#define ll long long
 
using namespace std;
 
typedef pair<int, int> pii;
 
const int INF = (int)2e16 + 109;
 
const int MOD = 1000000007;
 
const int NMAX = 300010, MMAX = 300010, KMAX = 300010;
 
int a[NMAX], b[NMAX], p[NMAX], v[NMAX];
string s, t, r;
 
int lcm(int a, int b) {
    return a * b / __gcd(a, b);
}
 
 
void solve_solve_solve() {
    ll t;
    cin >> t;
 
    int n = t;
 
    int ans = (2 * n) % MOD;
 
    int g = 2, l = 2;
 
    while (n / g > 0) {
        int k = n / g;
 
        ans = (ans + k) % MOD;
        l++;
 
        g = lcm(g, l);
    }
 
    ll x = ans;
 
    cout << x << "\n";
}
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
 
    ll Q = 1;
    cin >> Q;
 
    while (Q--) {
        solve_solve_solve();
    }
 
    return 0;
}