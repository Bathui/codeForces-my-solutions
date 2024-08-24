# include <iostream>
# include <vector>
# define endl "\n"
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        ll sum = 0, cnt = 0, mx = 0;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i< n; i++) {
            cin>>v[i];
            sum+=v[i];
            mx = max(mx, (ll)v[i]);
            sum-=mx;
            if (sum==mx) cnt++;
            sum+=mx;
        }
        cout<<cnt<<endl;
    }
}