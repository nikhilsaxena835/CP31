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
        ll n = -1, m, k;
        
        string s;
        cin >> s;
        if(s[0] == s[s.size()-1])
        cout << s << endl;
        else{
            s[0] = s[s.size()-1];
            cout << s << endl;
        }
        
        

   }
        return 0;
    }
    
