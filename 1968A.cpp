#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
int max_prefix_subsequence(std::string a, std::string b) {
    int n = a.length();
    int m = b.length();

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }

    return i;
}
void solve(){
    int n, m;
        std::string a, b;
        std::cin >> n >> m >> a >> b;

        int result = max_prefix_subsequence(a, b);
        std::cout << result << std::endl;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int tc;
cin >> tc;
for (int t = 1; t <= tc; t++) {
solve();
}
    return 0;
}