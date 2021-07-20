#include<bits/stdc++.h>
#include <iomanip>
#define hell                         1000000007
//#define M                            1000000007
#define Maxi                      10000000000000000
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
 
#define vll                          vector<ll>
#define vi                           vector<long long>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
//#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define lbnd                         lower_bound
#define ubnd                         upper_bound
#define bs                           binary_search
#define F                            first  
#define S                            second
#define rep(i,a,b)                   for(i=a;i<b;i++)
#define parr(a,n)                    for(i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define pcont(a)                     for(auto i:a) cout<<i<<" ";cout<<endl;
#define ret(x)                       return cout<<x,0;
#define dbg(x)                       cout << #x << " is " << x << endl;
#define endl                           '\n'
 //const ll infl=0x3f3f3f3f3f3f3f3fLL;

 #define pi                           3.141592653589793238
// Debug //
 
#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

using namespace std;
/*ll prime[1000006];
ll k;
vector<ll>v;
void fun()
{
  for(ll i=2;i<=1000000;i++)
  {
    if(prime[i]==0)
    {
      prime[i]=1;
      for(ll j=i+i;j<=1000000;j+=i)
      {
        prime[j]=0;
        // if(prime[j]==0)
        // prime[j]=i;
      }
    }
  }
  for(int i=2;i<=1000000;i++)
  {
    if(prime[i])
      v.pb(i);
  }
}*/

// bool divisors(long long n)
// {
//     long long i;
//     vector<ll>v;
//     for(i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             if(n/i==i)
//                 v.pb(i);
//             else
//             {
//                 v.pb(i);
//                 v.pb(n/i);
//             }
//         }
//     }
//     ll x=v.size();
//     if(x==0)
//         return true;
//     else
//         return false;
// }

// ll fact(ll n)
// {
//     ll i,p=1;
//     for(i=1;i<=n;i++)
//     {
//         p*=i;
//         p%=hell;
//     }
//     return p;
// }
//ll a[1003];
/*ll power(ll x,ll y,ll m) 
{ 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
 
    return (y%2 == 0)? p : (x * p) % m; 
}*/
// bool ispalindrome(string s)
// {
//     ll i;
//     for(i=0;i<n/2;i++)
//     {
//         if(s[i]!=s[n-i-1])
//             return false;
//     }
//     return true;
// }