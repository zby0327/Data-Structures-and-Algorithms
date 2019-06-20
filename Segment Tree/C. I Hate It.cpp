//Problem Web:http://www.bnuoj.com/contest_show.php?cid=9513#problem/C
#include<bits/stdc++.h>
#include<ext/rope>
#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

#define ll long long
#define lowbit(x) (x&-x)
#define rep(i,x,y) for(ll i=x;i<=y;i++)
#define crep(i,x,y) for(ll i=x;i>=y;i--)
#define gcd(x,y) __gcd(x,y)
#define mem(x,y) memset(x,y,sizeof(x))
#define pr pair
#define mp make_pair
//#define use_t 1
const double PI=acos(-1.0);
const double eps=1e-8;
const ll INF = 100000000;
const ll maxn=1000;
const ll q=1e9+7;
ll ksm(ll a,ll b)
{
    ll ans=1LL;
    while(b>0)
    {
        if(b&1LL)
            ans=ans*a%q;
        a=a*a%q;
        b/=2LL;
    }
    return ans;
}

ll t,n,m;
struct pos
{
    ll s,th;
    pos(ll _s=0,ll _th=0)
    {
        s=_s;
        th=_th;
    }
};
pos a[500005];
const ll os=200001;
int main ()
{
#ifdef yyhao
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
#endif
#ifdef use_t
ll ii=1;
cin>>t;
for(ii=1;ii<=t;ii++)
{
#endif // use_t
ll tmp;
    while(~scanf("%lld%lld",&n,&m))
    {
        for(int i=1;i<=n+os;i++)
        {
            pos[i]=pos(0,0);
        }
        for(ll i=1;i<=n;i++)
        {
            scanf("%lld",&tmp);
            t=i+os;
            a[t]=pos(tmp,i);
        }
    }




#ifdef use_t
}
#endif // use_t
    return 0;
}
