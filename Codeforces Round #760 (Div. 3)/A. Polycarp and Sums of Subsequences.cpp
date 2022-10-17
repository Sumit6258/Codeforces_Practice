//
//  ❤️ Created by Sumit Suman on 16-10-2022. ❤️
//

#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
#define read(arr,n) for(int i = 0; i < n; i++)cin>>arr[i];
#define vi vector<ll int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,a,b) for(int i=a; i<b; i++)
ll mod = 1e9+7;
#define fi first
#define se second
//#define sumit @sumit6258
using namespace std;


void code() {
    vi arr(7); read(arr, 7);
    
    if(arr[0] + arr[1] == arr[2]){
        cout << arr[0] << " " << arr[1] << " " << arr[3] << endl;
    }
    else{
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
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
