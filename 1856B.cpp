#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int cnt=0;
    ll sm=0;
    for(auto x:v){
        if(x==1)cnt++;
        sm+=x;
    }

    if(n>1 && sm>=cnt+n){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
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