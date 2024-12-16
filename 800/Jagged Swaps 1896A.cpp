
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

        ll one, temp;
        cin >> one;
        for(ll i = 1; i < n; i++)
        cin >> temp;

        if(one == 1)
        cout << "Yes" << endl;
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}