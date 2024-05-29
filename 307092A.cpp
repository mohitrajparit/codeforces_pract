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
    int n,m,k;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>k;
        a[i]=k;
    }
    for(int i=0;i<m;i++){
        cin>>k;
        b[i]=k;
    }
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(a[i++]);
    }
    while(j<m){
        ans.push_back(b[j++]);
    }
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    return 0;
}