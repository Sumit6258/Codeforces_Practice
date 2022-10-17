//
//  ❤️ Created by Sumit Suman on 16-10-2022. ❤️
//

#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
#define read(arr,n) for(int i = 0; i < n; i++)cin>>arr[i];
#define vi vector<ll int>
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,a,b) for(ll i=a; i<b; i++)
ll mod = 1e9+7;
#define fi first
#define se second
//#define sumit @sumit6258
using namespace std;


void code() {
    
    ll n,q;
    cin >> n >> q;
    ll even,sum;
    vi arr(n); read(arr , n);
    ll odd = even = sum = 0;
    
    rep(i,0,n){
        arr[i] & 1 ? odd++ : even++; //even & odd
        
        sum += arr[i];
    }
    
    ll x = q;
    ll a,b;
    while(x--){
        cin >> a >> b;
        a ? sum += (odd * b) : sum += (even * b);
        cout << sum << endl;
        
        if(b & 1){
            
            if(!a){
                odd = n, even = 0;
            }
            else{
                odd = 0, even = n;
            }
        }
    }
    


    
    
    
}


int main() {
    fast;
    int T = 1;
    cin >> T;
    while (T--) {
        code();
    }
    return 0;
}
