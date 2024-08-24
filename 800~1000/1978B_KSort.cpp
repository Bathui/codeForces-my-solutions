# include <iostream>
# include <vector>
# include <algorithm>
# define endl "\n"
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n; 
        ll mx = 0, coin = 0, mx1 = 0;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++) {
            mx = max(mx, (ll)a[i]);
            ll d = mx - a[i];
            coin+=d;
            mx1 = max(mx1, d);
        }
        cout<<coin+mx1<<endl;
    }
}