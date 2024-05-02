#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int MOD = 1e9;

void solve(){
    int n;
    cin>>n;
    vector<int>x(n-1,0);
    int tmp;
    for(int i=0;i<n-1;i++){
        cin>>tmp;
        x[i]=tmp;
    }
    vector<int> a(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int>dis(1,1e9);
    a[0]=dis(gen);
    // a[0] = x[0]+1; 
    for(int i=1;i<n;i++){
        a[i]=(x[i-1]+a[i-1]);
    }
    

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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