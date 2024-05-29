#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
void solve(){
    int a,b;
    cin>>a>>b;

    cout<<a*b/__gcd(a,b)<<endl;
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