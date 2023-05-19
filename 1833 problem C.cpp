// Problem: C. Vlad Building Beautiful Array
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest 1833 problem C
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
#define mod 998244353
#define no cout << "NO\n";

#define yes cout << "YES\n";

void solve(int tc) {
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll ii = 0;
  ll c = 0, cc = 0;
  ll m = INT_MAX;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (!(a[i] % 2))
      c++;
    else
      cc++;
    if (m >= a[i]) {
      m = a[i];
      ii = i;
    }
  }
  if (m % 2 || c == n || cc == n) yes else no
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