#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
int n;
vector<int>a(1000);
vector<int>tree(4000);
void build(int node,int st,int ed){
    if(st==ed){
        tree[node]=a[st];
        if(tree[node]<0)tree[node]=0;
        return;
    }
    int mid=(st+ed)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,ed);
    tree[node]=tree[2*node]+tree[2*node+1];
}
int query(int node,int st,int ed,int l ,int r){
    if(r<st || ed<l)return 0;

    if(l<=st && ed<=r)return tree[node];

    int mid=(st+ed)/2;

    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,ed,l,r);

    return q1+q2;       
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1);
    // for(int i=1;i<=15;i++)
        //cout<<tree[i]<<endl;
    while(1){
        int type;
        cin>>type;
        if(type==-1)break;

        if(type==1){
            //query
            int l,r;
            cin>>l>>r;
            int ans=query(1,0,n-1,l,r);
            cout<<ans<<endl;
        }

        if(type==0){
            //update
        }
    }
    return 0;
}