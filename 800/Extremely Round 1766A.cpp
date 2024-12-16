#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

ll maxl = INT_MIN;
ll minl = INT_MAX;

using namespace std;

bool comp(pair<char, ll> a, pair<char, ll >b)
{
    return a.second > b.second;
}

bool round(ll n)
{
    bool flag = false;

    while(n > 0)
    {
        ll digit = n%10;
        //cout << n << digit << endl;
        

        if(digit != 0 && flag)
        {
            //cout << digit << "f" << endl;
            return false;}
        if(digit != 0 && !flag)
        flag = true;

        n = n/10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> a (999999, 0);
    ll last = 0;
    for(ll i = 1;i <= 999999 ; i++)
    {

        if(round(i))
        {
            last++;
        }
        a[i] = last;
    }

    ll t  = 1;
    cin >> t;

    while (t--) {
        ll n,m = 0,k = 0;
        bool flag = false;
        //cin >> n;
       // vector<ll> a;

        ll ans = 0;
        //f(i,n)
        //{
            ll temp;
            cin >> temp;
            cout << a[temp] << endl;
            
        //}
        
        //cout << endl;
          
    }
    return 0;
}