#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

ll maxl = INT_MIN;
ll minl = INT_MAX;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;

    while (t--) {
        ll a, b, xK, yK, xQ, yQ;
        cin >> a >> b;
        string s;
        cin >> s;

        map<char,ll> mpp;

        if(b == 0 && s.size() == 1)
        {cout << "YES" << endl;continue;}
        

        for(ll i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        bool flag = false;
        for(auto x : mpp)
        {
            if(x.second%2 == 0)
            continue;
            else{
                if(!flag)
                {
                    flag = true;
                    continue;
                }
                //cout << x.first << b << endl;;
                b--;
            }
        }
        if(b >= 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
        
    }
    return 0;
}

/*
*/