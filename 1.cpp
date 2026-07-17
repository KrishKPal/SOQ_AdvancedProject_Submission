#include <bits/stdc++.h>
#include <bit>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<vector<ll>> vvi;
typedef vector<vector<ll>> vvl;

const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const ll INF = 1e18;
const ll INFi = 1e9;

#define fr(i, n) for (ll i = 0; i < (n); i++)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (ll)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define read(v, n) fr(i, n) cin >> v[i]
#define vcout(v) do {            \
    for (auto &_e : (v))         \
        cout << _e << " ";       \
} while (0)
#define FAST ios_base::sync_with_stdio(false); cin.tie(nullptr)


void Solve() {
   ll n, c;

        cin >> n >> c;
        vector<ll> a(n);
        ll s = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        sort(a.begin(), a.end());
        ll m = 0;
        while (m < n && a[m] < c) m++;
        ll b = n - m;
        ll k = min(m, b);
        ll g = 0;
        for (ll i = 0; i < k; i++)
            g += c - a[i];
        ll lo = k, hi = m - 1;
        while (lo < hi) {
            g += c - a[lo];
            lo++;
            hi--;
        }
        ll r = s -(c * n)+g;
        cout << r << '\n';
    }

int main(){
    FAST;
    ll t;
    cin>>t;
    while(t--) Solve();
    return 0;
}