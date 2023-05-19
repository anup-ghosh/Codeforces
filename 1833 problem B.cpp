// Problem: B. Restore the Weather
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/B
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n), b(n);
  vector<pair<ll, ll> > aa;
  vector<ll> res(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    aa.pb({a[i], i});
    // aa[i] = a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(all(aa));
  sort(all(b));
  // unordered_map<ll, vector<ll>> mp;
  // for (int i = 0; i < n; i++) {
  // mp[a[i]].pb(b[i]);
  // // mp[a[i]] = b[i];
  // }
  ll t = n;
  ll j = 0;
  while (t--) {
    ll x = aa[j].second;
    res[x] = b[j];
    j++;
  }
  // for (auto t : mp) {
  // cout << t.first << "->" << t.second << " ";
  // }
  for (int i = 0; i < n; i++) {
    cout << res[i] << " ";
  }
  cout << endl;
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