#include <bits/stdc++.h>

using namespace std;

long long n,ans;

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("bai7.inp","r",stdin);
    freopen("bai7.out","w",stdout);
    cin >> n;
    if (n<=9)
    {
        cout << n;
        return 0;
    }
    if (n<=99)
    {
        ans=9+(n-10+1)*2;
        cout << ans;
        return 0;
    }
    if (n<=999)
    {
        ans=9+(99-10+1)*2+(n-100+1)*3;
        cout << ans;
        return 0;
    }
    if (n<=9999)
    {
        ans=9+(99-10+1)*2+(999-100+1)*3+(n-1000+1)*4;
        cout << ans;
        return 0;
    }
    if (n<=99999)
    {
        ans=9+(99-10+1)*2+(999-100+1)*3+(9999-1000+1)*4+(n-10000+1)*5;
        cout << ans;
        return 0;
    }
    if (n<=999999)
    {
        ans=9+(99-10+1)*2+(999-100+1)*3+(9999-1000+1)*4+(99999-10000+1)*5+(n-100000+1)*6;
        cout << ans;
        return 0;
    }
    if (n<=9999999)
    {
        ans=9+(99-10+1)*2+(999-100+1)*3+(9999-1000+1)*4+(99999-10000+1)*5+(999999-100000+1)*6+(n-1000000+1)*7;
        cout << ans;
        return 0;
    }
    if (n<=99999999)
    {
        ans=9+(99-10+1)*2+(999-100+1)*3+(9999-1000+1)*4+(99999-10000+1)*5+(999999-100000+1)*6+(9999999-1000000+1)*7+(n-10000000+1)*8;
        cout << ans;
        return 0;
    }
    if (n<=999999999)
    {
        ans=9+(99-10+1)*2+(999-100+1)*3+(9999-1000+1)*4+(99999-10000+1)*5+(999999-100000+1)*6+(9999999-1000000+1)*7+(99999999-10000000+1)*8+(n-100000000+1)*9;
        cout << ans;
        return 0;
    }
    if (n==1000000000) cout << 9+(99-10+1)*2+(999-100+1)*3+(9999-1000+1)*4+(99999-10000+1)*5+(999999-100000+1)*6+(9999999-1000000+1)*7+(99999999-10000000+1)*8+(999999999-100000000+1)*9+10;
}
