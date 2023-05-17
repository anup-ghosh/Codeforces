// Problem: C. Counting Orders
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/contest/1828/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

/*//*Anup Ghosh*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pi acos(-1)
#define ull unsigned long long
#define nl printf("\n")
#define MAXN 1000005
#define gcd(a, b) __gcd(a, b)
#define pb push_back
#define all(x) x.begin(), x.end()
#define fio()                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define Erase(s) s.erase(unique(s.begin(), s.end()), s.end())

#define sp(n) fixed << setprecision(n)
#define mod 1000000007
#define no cout << "NO\n";

#define yes cout << "YES\n";

void solve(int tc) {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(all(a));
  sort(all(b));
  for (int i = 0; i < n; i++) {
    if (a[i] <= b[i]) {
      cout << 0 << endl;
      return;
    }
  }
  ll ans = 1;
  for (int i = 0; i < n; i++) {
    int l = i, h = n - 1;
    int id;
    while (l <= h) {
      int m = l + (h - l) / 2;
      if (a[i] > b[m]) {
        id = m;
        l = m + 1;
      } else {
        h = m - 1;
      }
    }
    ll tt = id - i + 1;
    ans *= tt;
    ans %= mod;
  }
  cout << ans << endl;
}

int main() {
  int t;
  t = 1;
  cin >> t;
  int x = 1;
  while (t--) {
    solve(x);
    x++;
  }

  return 0;
}