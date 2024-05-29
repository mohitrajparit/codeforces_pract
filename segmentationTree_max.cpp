#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
int n=1e5;
vector<int>a(n);
vector<int>tree(n);
void build(int node,int st,int ed){
    if(st==ed){
        tree[node]=a[st];
        return;
    }
    int mid=(st+ed)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,ed);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
int query(int node,int st,int ed,int l ,int r){
    if(r<st || ed<l)return INT_MIN;

    if(l<=st && ed<=r)return tree[node];

    int mid=(st+ed)/2;

    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,ed,l,r);

    return max(q1,q2);       
}
void update(int node,int st,int ed,int idx,int val){
    if(st==ed){
        tree[node]=val;
        a[st]=val;
        return ;
    }
    int mid=(st+ed)/2;

    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,ed,idx,val);
    }

    tree[node]=max(tree[2*node],tree[2*node+1]);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1);
    for(int i=1;i<=15;i++)
        cout<<tree[i]<<endl;
    cout<<endl;
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

        if(type==2){
            //update
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
            cout<<tree[1]<<endl;
        }
    }
    return 0;
}