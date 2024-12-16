
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;
        ll three_count = 0;
        ll ans = 0;
        for(ll i = 0; i < n; i++)
        {
            char c = s[i];
            if(s[i] == '.')
            {
                three_count++;
                if(three_count == 3)
                {
                    break;
                }
                else{
                    ans++;
                }
            }
            else{
                three_count = 0;
            }
        }
        if(three_count == 3)
        ans = 2;
        cout << ans << endl;
    }

    return 0;
}