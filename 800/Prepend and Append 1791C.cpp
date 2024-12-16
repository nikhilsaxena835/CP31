#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n,m = 0,k = 0;
        cin >> n;

        string s;
        cin >> s;
        bool flag = false;
        
        for(ll i = 0; i < n;)
        {
            if((s[i] == '0' && s[n-i-1] == '1') || (s[i] == '1' && s[n-i-1] == '0'))
            {
                k++;
            }
            else{
                break;
            }
            //cout << k << n << i << n-1-i << endl;
            i++;
            if(i >= (n-i-1))
            break;
        }

        m = n - 2*k;
        cout << m;


        cout << endl;
                
          
    }
    return 0;
}