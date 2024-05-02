#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
void solve(){
    int n,tmp;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        arr[i]=tmp;
        mp[tmp]++;
    }
    int ans=0;
    for(auto &[x,y]:mp){
        if(y>=3)ans+=y/3;
    }
    cout<<ans<<endl;

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
