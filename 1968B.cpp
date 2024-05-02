#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
void solve(){
    int x;
    cin>>x;
    int anss=-1;
    int ans=-1;

    for(int i=1;i<x;i++){
        int tmp=gcd(x,i)+i;

        if(tmp>=ans){
            ans=tmp;
            anss=i;
        }
    }
    cout<<anss<<endl;
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