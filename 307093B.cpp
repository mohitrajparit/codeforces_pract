#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    ll n,k,x;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>x;
        a[i]=x;
    }
    ll i=0,j=0,cnt=INT_MAX,sm=0;
    for(j=0;j<n;j++){
        sm+=a[j];
        while(i<n && sm>=k){
            cnt=min(cnt,j-i+1);
            sm-=a[i];
            i++;
        }
    }
    if(cnt==INT_MAX)cout<<-1<<endl;
    else cout<<cnt<<endl;
    
    
    return 0;
}