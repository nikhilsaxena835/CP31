#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

using namespace std;
int ans = INT_MAX;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;   
    while (t--) {
        unordered_map<ll, ll> mpp;
        bool choice = false;
        ll n, x = -1, m;
        cin >> n;

        vector<ll> vec (n);
        for(ll i = 0; i < n; i++)
            {
                cin >> vec[i];
                if(vec[i] == 1)
                vec[i] = 2;
            }

       
        for(ll i = 1; i < n; i++)
        {   
            
            if((vec[i] % vec[i-1]) == 0)
            vec[i]+=1;
        }       
        

        for(auto x : vec)
        cout << x  << " " ;
        cout << endl;  
        
    }
    return 0;
}