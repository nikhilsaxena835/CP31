
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

        if(n % 3 == 0)
        cout << "Second" << endl;
        else{
            cout << "First" << endl;
        }
    }

    return 0;
}