#include <bits/stdc++.h>
using namespace std;
// USER : ishan0611
// Macros :
#define endl      "\n"
#define ff        first
#define ss        second
#define ll        long long int
#define double    long double
#define pb        push_back
#define eb        emplace_back
#define mp        make_pair
#define pii       pair<int,int>
#define vi        vector<int>
#define si        set<int>
#define vs        vector<string>
#define mii       map<int,int>
#define all(x)    x.begin(),x.end()
#define mod       1000000007
#define ps(x,y)   fixed<<setprecision(y)<<x
 
// CODE :
void solve()
{
    int n,maxn;
    string s[1001];
    int x[1001];
    map<string,int> mp1,mp2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>x[i];
        mp1[s[i]]+=x[i];
    }
    for(auto &[u,v]:mp1)
    {
        maxn=max(maxn,v);
    }
    for(int i=0;i<n;i++)
    {
        mp2[s[i]]+=x[i];
        if(mp1[s[i]]==maxn && mp2[s[i]]>=maxn)
        {
            cout<<s[i];
            return;
        }
    }
}
int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int test=1;
   //cin>>test;
   for(int i=1;i<=test;i++)
   {
       solve();
   }
   return 0;
}