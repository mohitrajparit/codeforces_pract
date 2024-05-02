#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    int cnt=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            cnt=max(cnt,v[i]);
        }
    }
    
    
    cout<<cnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}