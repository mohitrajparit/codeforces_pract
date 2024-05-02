#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;

void solve() {
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;

    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> b(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++) {
        b[i] = b[i - 1] + a[p[(pb + i - 2) % n]];
        s[i] = s[i - 1] + a[p[(ps + i - 2) % n]];
    }

    ll sb = 0, ss = 0;
    for (int i = 1; i <= k; i++) {
        sb += a[p[(pb + i - 2) % n]];
        ss += a[p[(ps + i - 2) % n]];
        sb += s[min(k - i, n)] - s[0];
        ss += b[min(k - i, n)] - b[0];
    }

    if (sb > ss) {
        cout << "Bodya\n";
    } else if (sb < ss) {
        cout << "Sasha\n";
    } else {
        cout << "Draw\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }

    return 0;
}

