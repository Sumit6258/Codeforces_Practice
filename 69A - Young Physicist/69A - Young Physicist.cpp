//
//  ❤️ Created by Sumit Suman on 15-09-2022. ❤️
//

#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
#define vi vector<ll int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Rep(i,a,b) for(int i=a; i<b; i++)
ll mod = 1e9+7;
#define fi first
#define se second
//#define sumit @sumit6258
using namespace std;


int main() {
    fast;
    int T = 1;
    int x,y,z,xsum(0),ysum(0),zsum(0);
    cin >> T;
    while (T--) {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;

}
