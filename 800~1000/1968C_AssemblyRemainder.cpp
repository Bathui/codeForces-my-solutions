#include <iostream>
#include <algorithm>
# include <vector>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>x(n-1), a(n);
        for (int i = 0; i <n-1; i++) {
            cin>>x[i];
        }
        ll mx = *(max_element(x.begin(), x.end()));
        a[0] = mx+1;
        cout<<a[0]<<" ";
        for (int i = 0; i < n-1; i++) {
            a[i+1] = a[i]+x[i];
            cout<<a[i+1]<<" ";
        }
        cout<<endl;
    }
}