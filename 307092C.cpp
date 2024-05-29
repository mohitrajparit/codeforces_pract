#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
void solve(){
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    ll n,m,k;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++){
        cin>>k;
        a[i]=k;
    }
    for(ll i=0;i<m;i++){
        cin>>k;
        b[i]=k;
    }
    ll i=0,j=0,cnt=0;
    ll ans=0;
    while(i<n && j<m){
        if(a[i]<b[j])i++;
        else if(b[j]<a[i])j++;
        else {
            ll x=i,y=j;
            ll xc=0,xy=0;
            while(x<n && a[x]==a[i]){xc++;x++;}
            while(y<m && b[y]==b[j]){xy++;y++;}

            ans+=xc*xy;
            i=x;j=y;
        }
    }
    cout<<ans<<endl;
    return 0;
}