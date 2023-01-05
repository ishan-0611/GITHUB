#include <bits/stdc++.h>
using namespace std;
// USER : ishan0611
// Template Definition :
#define ff        first
#define ss        second
#define ll        long long int
#define double    long double
#define pb        push_back
#define mp        make_pair
#define pi        pair<int,int>
#define vi        vector<int>
#define si        set<int>
#define vs        vector<string>
#define mii       map<int,int>
#define all(x)    x.begin(),x.end()
#define mod       1000000007
#define ps(x,y)   fixed<<setprecision(y)<<x
 
// CODE :
void ishan_solve()
{
    ll n,sum=0;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<((n*(n+1)/2)-sum)<<endl;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int test=1;
   //cin>>test;
   for(int i=1;i<=test;i++)
   {
       ishan_solve();
   }
   return 0;
}