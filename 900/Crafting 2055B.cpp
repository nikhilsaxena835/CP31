#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define f(i,a) for(ll i = 0; i < a; i++)

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

using namespace std;

ll pow(ll n, ll exp)
{
    if(exp == 0)
    return 1;
    if(exp == 1)
    return n;

    ll half = pow(n, exp / 2);
    
    if(exp%2 == 0)
    return half * half;    
    else
    return n * half * half;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t  = 1;
    cin >> t;   
    while (t--) {
        bool choice = false;
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> na(n);
        int largest_need = 0, smallest_grant = INT_MAX;
        int bad = -1;  
        
        for (int i = 0; i < n; i++) {
            cin >> na[i];
            
            if (a[i] < na[i]) 
            {
                if (bad != -1)
                choice = true;
                bad = 1;
                largest_need = na[i] - a[i]; 
            } 
            else 
            smallest_grant = min(smallest_grant, a[i] - na[i]);
            
        }
        
        if (choice) 
        cout << "NO\n";
        else 
        cout << ((smallest_grant >= largest_need) ? "YES\n" : "NO\n");
        
    }
        return 0;
    }
    