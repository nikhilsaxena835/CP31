#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;   
    while (t--) {
        //unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n = -1;
        string s, t;
        cin >> s >> t;

        map<char, ll > mpp;
        for(int i = 0; i < t.size(); i++)
        mpp[t[i]]++;

        string ans = "";
        for(ll i = s.size()-1; i>=0; i--)
        {
            if(mpp[s[i]])
            {
                ans+= s[i];
                mpp[s[i]]--;
            }
        }
        reverse(ans.begin(), ans.end());
        //cout << ans << endl;
        if(ans == t)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

    }
        return 0;
    }
    
